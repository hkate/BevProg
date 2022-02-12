#include "../../std_lib_facilities.h"

class Time {     // The class
  private:
    int h; //hour
    int m; //minute
    int s; //second
    bool is_valid();

  public:           // Access specifier

    Time(int hh, int mm, int ss);     // Constructor
    class Invalid {};
};

Time::Time(int hh, int mm, int ss)
        :h{hh}, m{mm}, s{ss}

{
    if (!is_valid()) throw Invalid{};
}

bool Time::is_valid()   // Checks if the current state of Time object iss a valid one
{
    if (s < 1 || s > 60) return false;
    if (m < 1|| m > 60) return false;
    if (h < 1|| h > 24) return false;

    return true;
}

int main() {
  Time current;    // Create an object of Time (this will call the constructor)
  
  return 0;
}
