#include "../std_lib_facilities.h"

int error_ID_number = 0;

int area (int lenght, int width) {

    if(lenght <= 0)
        error_ID_number = 2;

    if(width <= 0)
        error_ID_number = 3;
    
    return lenght*width;
}

int framed_area(int x, int y) {

    constexpr int framed_width = 2;
    return area(x-framed_width, y-framed_width);

}

int main(){
    int x = 2;
    int y = 4;

    int area1 = area(x,y);
    if(error_ID_number == 2) error("non_positive lenght\n");
    if(error_ID_number == 3) error("non_positive width\n");
    cout << "area1: " << area1 << endl;


    int area2 = area (3, 6);
    cout << "area2: " << area2 << endl;

    int area3 = framed_area (3, y);
    cout << "area2: " << area3 << endl;

    double ratio = double(area2)/area1;
    cout << "ratio: " << ratio << endl;

    return 0;
}