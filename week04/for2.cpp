#include "../std_lib_facilities.h"

int square(int x){
    return x*x;
}

int main () {

    for(int i = 1; i<100 ; ++i){
        cout << i << '\t' << square(i) << endl;
    }
    return 0;
}