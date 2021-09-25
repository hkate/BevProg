#include "../../std_lib_facilities.h"

int main () {


    string first_name;
    string friend_name;
    char friend_sex = '0';
    int age;
    string my_name;
    
    cout << "Enter your name" << endl;
    cin >> my_name;
    cout << "Enter the name of the person you want to write to" << endl;
    cin >> first_name;
    cout << "Enter a common friends name you want to ask about" << endl;
    cin >> friend_name;
    cout << "Enter an m if the friend is male and an f if the friend is female" << endl;
    cin >> friend_sex;
    cout << "Enter the recipients age" << endl;
    cin >> age;

    if(age <= 0)
        simple_error("you're kidding!");
    if(age >= 110)
        simple_error("you're kidding!");
    
    cout << endl;
    cout << endl;
    cout << "Dear " << first_name << "," << endl;
    cout << endl;
    cout << "   How are you? I am fine. I miss you. I can not wait to hear what happened to you since the last time we talked. It's been such a long time, we should meet soon." << endl;
    cout << "Have you seen " << friend_name << " lately?" << endl;

    if(friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me." << endl;
    if(friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    
    cout << "I hear you just had a birthday and you are " << age << " years old." << endl;

    if(age < 12)
        cout << "Next year you will be " << age+1 << "." << endl;
    if(age == 17)
        cout << "Next year you will be able to vote." << endl;
    if(age > 70)
        cout << "I hope you are enjoying retirement." << endl;
    
    cout << "Yours sincerely," << endl;
    cout << endl;
    cout << endl;
    cout << my_name << endl;

    return 0;
}