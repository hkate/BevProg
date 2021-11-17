#include "../../../std_lib_facilities.h"

void swap_v(int a,int b) {
    int temp;
    temp = a;
    a=b;
    b=temp;
}

void swap_r(int& a,int& b) {
    int temp;
    temp = a;
    a=b;
    b=temp;
}

/*
void swap_cr(const int& a,const int& b) {       // konstans miatt 
    int temp;                                   //nem lehet változtatni az értéket
    temp = a;
    a=b;
    b=temp;
}
*/

int main() {

    int x = 7;
    int y = 9;
    
    /*

    swap_v(x,y);

    cout << "x is now " << x << " and y is now " << y << endl;      // didn't swap

    */

    swap_r(x,y);

    cout << "x is now " << x << " and y is now " << y << endl;

    /*

    swap_v(7,9);

    cout << "x is now " << x << " and y is now " << y << endl;     // didn't swap, just used swap_r -s x,y

    */

    //swap_r(7,9);


    const int cx = 7;
    const int cy = 9;

    /*
    swap_v(cx,cy);
    swap_r(cx,cy);          //konstans miatt nem változhat az érték
    swap_v(7.7,9.9);
    swap_r(7.7,9.9);
    */

    cout << "x is now " << cx << " and y is now " << cy << endl;

    double dx = 7.7;
    double dy = 9.9;

    /*
    swap_v(dx,dy);      // int nem lehet lebegőpontos szám
    swap_r(dx,dy);
    swap_v(7.7,9.9);    // int& nem lehet lebegőpontos szám
    swap_r(7.7,9.9);
    */

    cout << "x is now " << dx << " and y is now " << dy << endl;

    return 0;
}