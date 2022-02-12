#include "std_lib_facilities.h"

ostream& tomb_kiiras(ostream& os,char* t,int a){   
    os << "A tömbb mérete: " << a << endl;
    for(int i=0;i<a ; i++){
            os << t[i] << endl;
    }   
    return os;
};

int main(){
    char* tomb = new char[20] {'a','b','c','d','e','f'};   
    tomb_kiiras(cout,tomb,20);

    delete[] tomb;

    return 0;
}