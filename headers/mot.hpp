#pragma once

#include "chaine_ext.hpp"

class Mot : public ChaineExt {
public:
	Mot(); // 3.a
	Mot(const char*); // 3.a
	bool operator==(const Mot&) const; // 3.b
	bool operator<(const Mot&) const; // 3.b
};