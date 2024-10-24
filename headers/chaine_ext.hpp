#pragma once

#include "chaine.hpp"

class ChaineExt : public Chaine {
public:
	ChaineExt(); // 2.a
	ChaineExt(const char*); // 2.a
	ChaineExt lower() const; // 2.b
	int compare(const ChaineExt&, bool=true) const; // 2.c
	ChaineExt operator+(const ChaineExt&) const; // 2.d
	ChaineExt& operator+=(const ChaineExt&); // 2.d
	void replace(char, char); // 2.e
	ChaineExt sub(int, int) const; // 2.f
};