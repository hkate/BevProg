#include "../../std_lib_facilities.h"

int main() {

/*
    vector<double>numbers;
    double number=0;

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

    if (numbers[0] == numbers[1]){
        cout << "The numbers are equal." << endl;
    } else if (abs(numbers[0] - numbers[1]) < 0.1){
        cout << "The numbers are almost equal." << endl;
    }

    cout << "If you want to exit type | "<< endl;

    for(string kilep; cin >> kilep && kilep != "|";){
    }

*/

    double smallest=std::numeric_limits<double>::max();
    double largest=std::numeric_limits<double>::min();
    double number;
    
    cout << "Enter a number."<< endl;

    while (cin >> number){
        cout << number << endl;
        if (number < smallest) {
        smallest = number;
        cout << "is the smallest so far." << endl;
        }
        if (number > largest) {
        largest = number;
        cout << "is the largest so far." << endl;
        }

    }
}