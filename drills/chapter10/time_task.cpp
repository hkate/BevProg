#include "../../std_lib_facilities.h"

class Time {
    int hour;
    int minute;
    int second;
public:
    Time(int h, int m, int s);
    void is_valid(int h, int m, int s);
    int h() const { return hour; }
    int m() const { return minute; }
    int s() const { return second; }


};
Time::Time(int h, int m, int s)
:hour{h}, minute{m}, second{s}{
    is_valid(hour, minute, second);
}

void Time::is_valid(int h, int m, int s) {

    if (h>23 || h<0 || m >59 || m < 0 || s > 59 || s < 0){
        cout << "The time is not valid" << endl;
    }
    else {
        cout << "The time is valid" << endl;
    }

}

ostream& operator<<(ostream& os, const Time& t){

    return os << t.h() << ":" << t.m() << ":" << t.s() << endl;
}


int main(){
    Time this_time(23, 34, 72); // not valid time
    cout << this_time;
    Time this_time2(12, 43, 21); // valid time
    cout << this_time2;

    return 0;

}

