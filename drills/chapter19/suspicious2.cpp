#include "std_lib_facilities.h"

vector<int>* suspicious()
{
	vector<int>* p = new vector<int>;

	for(int i; cin >> i; ) //feltöltjük a vektort
	{
		if(i) p->push_back(i); //ha i nem 0
		else throw std::exception();
	}

	return p;
}

int main()
try {

	vector<int>* p = suspicious();

	for(int i = 0; i < p->size(); ++i)
		cout << p->at(i) << ' '; //kiírjuk az értékeit
	cout << '\n';

	delete p; //felszabadítás

	return 0;

} catch (std::exception& e){
	std::cerr << "Error!\n";
	return 1;
}