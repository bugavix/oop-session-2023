#pragma once

#include <vector>
#include <iostream>

class Chaine {
public:
	Chaine(); // 1.a
	Chaine(const char*); // 1.a
	friend std::ostream& operator<< (std::ostream&, const Chaine&); // 1.b
	void addCar(char);	// 1.c
	int getLen() const; // 1.d
	void setCar(char, int); // 1.d
	char getCar(int) const; // 1.d
	char* chaineC() const; // 1.e

private:
	std::vector<char> caracteres;
};