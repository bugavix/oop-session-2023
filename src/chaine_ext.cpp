#include "../headers/chaine_ext.hpp"

#include <ctype.h>
#include <cstring>

ChaineExt::ChaineExt() : Chaine() {

}

ChaineExt::ChaineExt(const char* c) : Chaine(c) {

}

ChaineExt ChaineExt::lower() const{
	ChaineExt tmp;
	int length = this->getLen();
	for(int i = 0; i < length; i++) {
		tmp.addCar(tolower(this->getCar(i)));
	}

	return tmp;
}

int ChaineExt::compare(const ChaineExt& other, bool case_sensitive) const {
	char* str1 = this->chaineC();
	char* str2 = other.chaineC();

	return (case_sensitive) ? strcmp(str1, str2) : strcasecmp(str1, str2);
}

ChaineExt ChaineExt::operator+(const ChaineExt& other) const {
	int length = other.getLen();
	ChaineExt tmp(this->chaineC());

	for(int i = 0; i < length; i++) {
		tmp.addCar(other.getCar(i));
	}

	return tmp;
}

ChaineExt& ChaineExt::operator+=(const ChaineExt& other) {
	*this = *this + other;

	return *this;
}

void ChaineExt::replace(char c1, char c2) {
	int length = this->getLen();

	for(int i = 0; i < length; i++) {
		if(c1 == this->getCar(i)) {
			this->setCar(c2, i);
		}
	}
}

ChaineExt ChaineExt::sub(int pos, int length) const {
	ChaineExt tmp;
	int stop = (pos + length > this->getLen()) ? this->getLen() : pos + length;
	for(int i = pos; i < stop; i++) {
		tmp.addCar(this->getCar(i));
	}

	return tmp;
}