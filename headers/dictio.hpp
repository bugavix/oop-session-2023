#pragma once

#include "mot.hpp"
#include <map>
#include <iostream>

#define MAX_CHAR 50

struct Traduction {
	Mot ang;
	Mot esp;
};

enum LANG {
	ANG = 0,
	ESP
};

class Dictio {
public:
	Dictio(); // 4.a
	Dictio(const char*); // 4.a
	void print_lowercase() const; // 4.b
	void add_entry(const Mot&, const Traduction&); // 4.c
	Mot give_translation(const Mot&, LANG) const; // 4.d
	bool modify_translation(const Mot&, LANG, const Mot&); // 4.e
	void add_from_other(const Dictio&); // 4.f
	void update_from_other(const Dictio&); // 4.g
	void save_to_file(const char*) const; // 4.h
	friend std::ostream& operator<<(std::ostream&, const Dictio&);

private:
	std::map<Mot, Traduction> traductions;
};
