#include <iostream>

using namespace std;

extern int szam1, szam2, szam3;

int szorzat(int szam1, int szam2, int szam3){
    return(szam1*szam2*szam3);  //visszatérő értékkel
}

void udvozles(string nev){ //eljárással

    cout << "Üdvözlet" << nev << "!" << endl;

}