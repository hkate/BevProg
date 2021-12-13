#include "std_lib_facilities.h"

void suspicious(int size, int x)
{
	int* p = new int[size];

	if(x == 0) throw std::exception();

	delete[] p; //ez már nem fut le
}

int main()
try {

	suspicious(5, 0); // mekkora memóriát foglalunk le, 

	return 0;

} catch (std::exception& e){
	std::cerr << "Error!\n";
	return 1;
}