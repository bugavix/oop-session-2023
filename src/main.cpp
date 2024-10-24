/*
	main function of OOP previous 2023-2024
	author: bugavix
*/

#include <iostream>
#include "../headers/chaine.hpp"
#include "../headers/chaine_ext.hpp"

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

	// Testing 2:

	std::cout << "\n** Testing section 2 code:\n";
	ChaineExt ce1("equal");
	ChaineExt ce2("RandOm");

	std::cout << "ce1 = " << ce1 << ", ce2 = " << ce2 << std::endl;
	std::cout << "ce2.lower() = " << ce2.lower() << std::endl;
	std::cout << "ce1.compare(ce2) = " << ce1.compare(ce2) << std::endl;
	std::cout << "ce1.compare(ce2, false) = " << ce1.compare(ce2, false) << std::endl;
	std::cout << "ce1 + ce2 = " << ce1 + ce2 << std::endl;
	ce1 += ce2;
	std::cout << "ce1 += ce2 = " << ce1 << std::endl;
	ce1.replace('a', 'i');
	std::cout << "ce1.replace('a', 'i') = " << ce1 << std::endl;
	std::cout << "ce1.sub(2, 5) = " << ce1.sub(2, 5) << std::endl;
	std::cout << "ce1.sub(2, 15) = " << ce1.sub(2, 15) << std::endl;

	return 0;
}