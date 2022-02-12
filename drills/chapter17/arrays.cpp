//C++ Arrays

//Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

//To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:

string cars[4];

//We have now declared a variable that holds an array of four strings. To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

//To create an array of three integers, you could write:

int myNum[3] = {10, 20, 30};

-----------------------------------------

//Access the Elements of an Array

//You access an array element by referring to the index number.

//This statement accesses the value of the first element in cars:

//Example
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];        // Outputs Volvo

-----------------------------------------

//Change an Array Element

//To change the value of a specific element, refer to the index number:

//Example
cars[0] = "Opel";
//Example
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0];        // Now outputs Opel instead of Volvo

-----------------------------------------

// Program to illustrate deletion of array
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Allocate Heap memory
    int* array = new int[10];
     
    // Deallocate Heap memory       //miért kell?
    delete[] array;
 
    return 0;
}