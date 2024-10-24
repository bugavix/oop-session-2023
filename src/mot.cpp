#include "../headers/mot.hpp"

Mot::Mot() : ChaineExt() {

}

Mot::Mot(const char* c) : ChaineExt(c) {

}

bool Mot::operator==(const Mot& other) const {
	return !(this->compare(other, false));
}

bool Mot::operator<(const Mot& other) const {
	return this->compare(other, false) < 0;
}