#include "../std_lib_facilities.h"

int main () {

    cout << "Please enter your name and your age!" << endl;

    string first_name, last_name;
    int age;

    cin >> first_name >> last_name >> age;

    string name = first_name + ' ' + last_name;

    age= age + 1;
    age += 1;
    age++;

    cout << "Hello, " << name << "! (" << age << ")" << endl;

    return 0;
}