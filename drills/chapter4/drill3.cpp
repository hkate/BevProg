#include "../../std_lib_facilities.h"

int main() {

    vector<int>numbers;
    int number=0;

    cout << "Enter two numbers"<< endl;

    while (numbers.size()<2) {
        cin >> number; 
        numbers.push_back(number); 
    }

    sort(numbers);

    cout << "Your numbers in order: "<< endl;

    for (int i=0; i<numbers.size(); ++i){
    cout << numbers[i] << endl;

    }   
    cout << "If you want to exit type | "<< endl;

    for(string kilep; cin >> kilep && kilep != "|";){
    }


}