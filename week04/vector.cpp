#include "../std_lib_facilities.h"

int main () {

    vector<int> v = {5, 8, 2, 4, 1};

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    vector<string> names = {"Pisti", "Kati", "Imi"};

    for(auto name : names){
        cout << name << endl;
    }

    vector<double> dv;
    cout << "Vector size" <<dv.size() << endl;

    dv.push_back(3.5);
    dv.push_back(1.7);
    dv.push_back(8.543543);

    cout << "Vector size: " << dv.size() << endl;

    for(auto number : dv){
        cout << number << endl;
    }

    cout << dv[2] << endl;


    return 0;
}