#include <vector>
#include <iostream>
#include <memory>

std::vector<int>* suspicious()
{
	std::unique_ptr<std::vector<int>> p { new std::vector<int> }; //unique pointer, ami integet vectorra mutat

	for(int i; std::cin >> i; )
	{
		if(i) p->push_back(i);
		else throw std::exception();
	}

	return p.release(); //nem p-t hanem egy vektor pointert adunk vissza
}

int main()
try {

	std::vector<int>* p = suspicious();

	for(int i = 0; i < p->size(); ++i)
		std::cout << p->at(i) << ' ';
	std::cout << '\n';

	delete p;

	return 0;

} catch (std::exception& e){
	std::cerr << "Error!\n";
	return 1;
}