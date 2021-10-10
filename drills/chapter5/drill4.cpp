#include "../../std_lib_facilities.h"

int main(){

    try {
        //1. Cout << "Success!\n";
        cout << "1. Success!\n";

        //2. cout << "Success!\n;
        cout << "2. Success!\n";

        //3. cout << "Success" << !\n"
        cout << "3. Success!\n";

        //4. cout << success << '\n';
        cout << "4. Success!\n";

        //5. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        int res = 7; vector<int> v(10); v[5] = res; cout << "5. Success!\n";

        //6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
        vector<int> v2(10); v2[5] = 7; if (v2[5]==7) cout << "6. Success!\n";

        //7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";
        if (2+3==5) cout << "7. Success!\n"; else cout << "Fail!\n";

        //8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
        bool c = false; if (c!=true) cout << "8. Success!\n"; else cout << "Fail!\n";

        //9. string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
        string s = "ape"; bool c2 = "fool"<s; if (!c2) cout << "9. Success!\n";

        //10. string s = "ape"; if (s=="fool") cout << "Success!\n";
        string s2 = "ape"; if (s2!="fool") cout << "10. Success!\n";

        //11. string s = "ape"; if (s=="fool") cout < "Success!\n";
        string s3 = "ape"; if (s3!="fool") cout << "11. Success!\n";

        //12. string s = "ape"; if (s+"fool") cout < "Success!\n";
        string s4 = "ape"; if (s4!="fool") cout << "12. Success!\n";

        //13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
        vector<char> v3(5); for (int i=0; i<v3.size(); ++i); cout << "13. Success!\n";

        //14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        vector<char> v4(5); for (int i=0; i<=v4.size(); ++i); cout << "14. Success!\n";

        //15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
        string s5 = "15. Success!\n"; for (int i=0; i<6; ++i); cout << s5;

        //16. if (true) then cout << "Success!\n"; else cout << "Fail!\n";
        if (true) cout << "16. Success!\n"; else cout << "Fail!\n";

        //17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
        int x = 2000; int c3 = x; if (c3==2000) cout << "17. Success!\n";

        //18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
        string s6 = "18. Success!\n"; for (int i=0; i<10; ++i) cout << s6;

        keep_window_open();
        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch (...) {
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
        return 2;
    
    }
}
