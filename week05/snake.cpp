#include <iostream>
#include <cstdlib>
#include <ncurses.h>
#include <chrono>
#include <thread>

// A program maga egy Snake játék, melyben a felhasználók képesek személyre szabott pályát alkotni, illetve pontokat gyűjteni melyet elmenthetnek
// Ez a program saját egyedi elgondolások alapján lett megvalósítva
// Console játék ami különböző c++ beli funkciókat használ, mint pl az ncurses

using namespace std;
using namespace chrono;

bool gameOver;
int width = 0;
int height = 0;
int tailX[100];
int tailY[100];

int x, y, fruitX, fruitY, score;
enum eDirection{STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void jatek_vege(){
    clear();
    mvprintw(height/2-1, 0, "End of the game");
    refresh();
    halfdelay(3);
    mvprintw(height/2, 0, "Yo have collected %d point(s)! \n", score);
    refresh();

}

void palya_meret(){
    system("clear");
    cout << "Please, write in the width of the field: ";
    cin >> width;
    cout << "Please, write in the heigth of the field: ";
    cin >> height;
    cout << "width: "<< width << " magasság: " << height << endl;
    system("clear");
}

void setup(){
    initscr();
    clear();
    noecho();
    gameOver = false;
    dir = STOP;
    x = width/2;
    y= height / 2;
    fruitX = random() % (width-2) +1;
    fruitY = random() % (height-2) +1;

}
void palya_rajz(){

    clear();

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i==0 || i == height-1){
                mvprintw(i,j,"#");
            }
            else if (i>0 && j==0 && i<height-1 || i>0 && i<height-1 && j==width-1 ){
                mvprintw(i,j,"#");
            }
            else if (i>0 && j>0 && i<height-1 && j<width-1) {
                if (i == y && j == x){
                    mvprintw(i,j,"O");
                }
                else if (i == fruitY && j == fruitX){
                    mvprintw(i,j,"P");
                }
                else
                {
                    for (int k = 0; k < score; ++k) {
                        if (tailY[k] == i && tailX[k] == j) {
                            mvprintw(i, j, "o");
                        }
                    }
                }
            }
        }
    }

    mvprintw(height+2, 0, "Score: %d \n fruitY: %d \n fruitX: %d", score, fruitY, fruitX);

    refresh();
}


void bevitel(){
    keypad(stdscr, TRUE);
    halfdelay(1);
    int c = getch();
        switch(c){
            case 'a':
                dir = LEFT;
                break;
            case 260:
                dir=LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 261:
                dir=RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 259:
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 258:
                dir = DOWN;
                break;
            case 'x':
                gameOver=true;
                break;
        }
}
void mozgas(){
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prevX2, prevY2;

    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < score; i++) {
        prevX2 = tailX[i]; //2 --> 2
        prevY2 = tailY[i]; //4 --> 3
        tailX[i] = prevX; // 2 --> 2
        tailY[i] = prevY; // 5 --> 4
        prevX = prevX2; // 2 --> 2
        prevY = prevY2; // 4 --> 3
    }

    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }
    if (fruitY == y && fruitX== x){
        score++;
        fruitY = random() % (height-2) +1;
        fruitX = random() % (width-2) +1;
    }

}

void uj_jatek(){



}


void halalozas(){
    int erintes = 0;
    if (x==0 || x>=width-1 || y==0 || y==height-1){
        gameOver=true;
    }
    for (int i = 1; i < score; i++) {
        if (tailX[i] == x && tailY[i]==y){
            // gameOver=true;
            erintes=i;
            for (int i = erintes; i < score; i++) {
                tailX[i]=0;
                tailY[i]=0;
            }
            score=erintes;
            mvprintw(height+1, 0, "%d", erintes);
        }
    }
    refresh();
}

void jatek_betoltes(){
    initscr();
    int sor = 3;
    int oszlop = width/2;
    this_thread::sleep_for(seconds(3));
    for (int i = 3; i >= 1; i--) {
        mvprintw(sor, oszlop, "%d", i);
        sor++;
        refresh();
        this_thread::sleep_for(seconds(1));
    }
    clear();
    mvprintw(height/2, 3, "SHOW TIME!!");
    refresh();
    this_thread::sleep_for(seconds(2));
}

int main() {
    palya_meret();
    jatek_betoltes();
    setup();
    while (!gameOver){
        palya_rajz();
        bevitel();
        mozgas();
        halalozas();

    }
    jatek_vege();
    return 0;
}