/*
	main function of OOP previous 2023-2024
	author: bugavix
*/

#include <iostream>
#include "../headers/chaine.hpp"

int main() {
	std::cout << "\n** Program Start\n";

	// Prgram start:

	// Testing 1:

	std::cout << "\n** Testing section 1 code:\n";
	Chaine c1;
	Chaine c2("characters");

	std::cout << "c1 = " << c1 << "(normally should be empty), c2 = " << c2 << std::endl;
	c1.addCar('h');
	std::cout << "c1.addCar('h') = " << c1 << std::endl;
	std::cout << "Length of c2: " << c2.getLen() << std::endl;
	std::cout << "Fourth character of c2: " << c2.getCar(3) << std::endl;
	c1.setCar('c', 0);
	std::cout << "c1.setCar('c', 0) = " << c1 << std::endl;
	char* tmp = 0;
	tmp = c2.chaineC();
	std::cout << "c2 as c string: " << tmp << std::endl;
	delete[] tmp;
	tmp = 0;



	return 0;
}