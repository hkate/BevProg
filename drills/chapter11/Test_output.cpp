#include "../../std_lib_facilities.h"


int main()
try {
    int birth_year = 2001;

    cout << "decimal\t\t" << birth_year << '\n' << hex
         << "hexadecimal\t" << birth_year << '\n' << oct
         << "octal\t\t" << birth_year << '\n';

    cout << dec << 20 << '\n';

    cout << '|' << setw(8) << "Halász" 
         << '|' << setw(8) << "Kata" 
         << '|' << setw(24) << "halasz.kata01@gmail.com"
         << '|' << setw(16) << "(30) 938-1234" << "|\n"
         << '|' << setw(8) << "Halász" 
         << '|' << setw(8) << "Attila"
         << '|' << setw(24) << "halasz.attila@gmail.com"
         << '|' << setw(16) << "(30) 555-4321" << "|\n";
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something troubling occurred..\n";
    return 2;
}