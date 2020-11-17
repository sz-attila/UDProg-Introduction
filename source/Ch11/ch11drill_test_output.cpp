#include "std_lib_facilities.h"


int main()
try {
    int birth_year = 2002;

    cout << "decimal\t\t" << birth_year << '\n' << hex
         << "hexadecimal\t" << birth_year << '\n' << oct
         << "octal\t\t" << birth_year << '\n';

    cout << dec << 18 << '\n';

    cout << '|' << setw(8) << "Attila" << '|' << setw(8) << "Szalai" 
         << '|' << setw(24) << "szalaiattila2002@gmail.com"
         << '|' << setw(16) << "06704203212" << "|\n";
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something troubling occurred..\n";
    return 2;
}