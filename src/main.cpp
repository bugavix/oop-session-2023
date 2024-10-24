/*
	main function of OOP previous 2023-2024
	author: bugavix
*/

#include <iostream>
#include "../headers/chaine.hpp"
#include "../headers/chaine_ext.hpp"
#include "../headers/mot.hpp"
#include "../headers/dictio.hpp"

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

	// Testing 3:

	std::cout << "\n** Testing section 3 code:\n";
	Mot m1("Arc");
	Mot m2("arc");
	Mot m3("battery");

	std::cout << "m1 = " << m1 << ", m2 = " << m2 << ", m3 = " << m3 << std::endl;
	std::cout << "m1 == m2: " << (m1 == m2) << std::endl;
	std::cout << "m1 == m3: " << (m1 == m3) << std::endl;
	std::cout << "m1 < m3: " << (m1 < m3) << std::endl;

	// Testing 4:
	std::cout << "\n** Testing section 4 code:\n";
	Dictio d1("input.txt");
	Dictio d2;

	std::cout << "d1:\n" << d1 << "d2: (Normally empty)\n" << d2 << std::endl;
	Traduction t1;
	t1.ang = "english";
	t1.esp = "engles";
	d2.add_entry("anglais", t1);
	std::cout << "d2 after adding an entry: ";
	d2.print_lowercase();
	d2.modify_translation("anglais", LANG::ESP, "ingles");
	std::cout << "d2 after modifying an entry:";
	d2.print_lowercase();
	std::cout << "Translation of anglais according to d2: " << d2.give_translation("anglais", LANG::ANG) << std::endl;
	std::cout << "Adding the 'anglais' entry to d1:";
	d1.add_entry("anglais", t1);
	d1.print_lowercase();
	std::cout << "Adding all of d1 to d2:";
	d2.add_from_other(d1);
	d2.print_lowercase();
	std::cout << "Updating d1 from d2:";
	d1.update_from_other(d2);
	d1.print_lowercase();
	std::cout << "Printing d2 to file 'output.txt':" << std::endl;
	d2.save_to_file("output.txt");

	// Program End
	std::cout << "\n** Program End\n";

	return 0;
}