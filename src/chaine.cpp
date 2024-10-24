#include "../headers/chaine.hpp"

#include <vector>
#include <cstring>
#include <iostream>

Chaine::Chaine() {

}

Chaine::Chaine(const char* str) {
	int str_length = strlen(str);

	for(int i = 0; i  < str_length; i++) {
		this->caracteres.push_back(str[i]);
	}
}

void Chaine::addCar(char c) {
	this->caracteres.push_back(c);
}

int Chaine::getLen() const {
	return this->caracteres.size();
}

void Chaine::setCar(char c, int i) {
	this->caracteres[i] = c;
}

char Chaine::getCar(int i) const {
	return this->caracteres[i];
}

char* Chaine::chaineC() const {
	char* tmp = 0;
	int length = this->getLen();
	tmp = new char[length + 1];
	tmp[length] = 0;

	for(int i = 0; i < length; i++) {
		tmp[i] = this->getCar(i);
	}

	return tmp;
}

std::ostream& operator<< (std::ostream& out, const Chaine& chaine) {
	int length = chaine.getLen();
	for(int i = 0; i < length; i++) {
		out << chaine.getCar(i);
	}

	return out;
}