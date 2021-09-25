#include "../std_lib_facilities.h"

int main () {

    const double cm_per_inch = 2.54;
    double length = -1;
    char unit = 0;

    cout << "Please enter a length followed by a unit (c or i)" << endl;

    cin >> length >> unit;

    if(unit == 'i')
        cout << length << " in = " << length*cm_per_inch << " cm" << endl;
    else if(unit == 'c') {
        cout << length << " cm = " << length*cm_per_inch << " in" << endl;
    }

    else
        cout << "Error, invalid unit" << endl;

    switch(unit){
        case 'i':
        cout << length << " in = " << length*cm_per_inch << " in" << endl;
        break;
    default:
        cout << "Error, invalid unit" << endl;
    }

    return 0;
}