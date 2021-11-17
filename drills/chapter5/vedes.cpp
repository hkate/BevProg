//csinálj egy 5 egész számot tartalmazó vektort aminek tartama 1,2,3,4,5
//ezt írassam ki úgy hogy range errort kapjunk, majd ezt kezeljük is le

#include "../../std_lib_facilities.h"

int main(){

    try{
        vector<int>szam={1,2,3,4,5};

        for (int i=0; i<szam.size(); ++i){
        cout << i+1 << ". szam " << szam[i] << endl;
        }

        return 0;
    }

    catch (out_of_range) {
        cerr << "Range error"<< '\n';
    return 1;
    
    }
}