#include "../headers/dictio.hpp"
#include "../headers/mot.hpp"
#include <fstream>
#include <iostream>
#include <map>

Dictio::Dictio() {

}

Dictio::Dictio(const char* file_path) {
	std::ifstream in(file_path, std::ifstream::in);
	char buffer[MAX_CHAR + 1];

	while(!in.eof()) {
		in >> buffer;
		Mot fr(buffer);
		in >> buffer;
		Mot en(buffer);
		in >> buffer;
		Mot es(buffer);

		Traduction trad;
		trad.ang = en;
		trad.esp = es;

		this->add_entry(fr, trad);
	}

	in.close();
}

void Dictio::print_lowercase() const {
	std::cout << std::endl << *this << std::endl;
}

void Dictio::add_entry(const Mot& fr, const Traduction& trad) {
	if(!this->traductions.count(fr)) {
		this->traductions.insert(std::pair<Mot, Traduction>(fr, trad));
	}
}

Mot Dictio::give_translation(const Mot& fr, LANG lang) const {
	Mot tmp("error!");
	if(this->traductions.count(fr)) {
		tmp = (lang == LANG::ANG) ? this->traductions.at(fr).ang : this->traductions.at(fr).esp;
	}

	return tmp;
}

bool Dictio::modify_translation(const Mot& fr, LANG lang, const Mot& other) {
	if(!this->traductions.count(fr)) {
		return false;
	}

	if(lang == LANG::ANG) {
		this->traductions[fr].ang = other;
	}
	else {
		this->traductions[fr].esp = other;
	}

	return true;
}

void Dictio::add_from_other(const Dictio& other) {
	for(std::map<Mot, Traduction>::const_iterator it = other.traductions.begin(); it != other.traductions.end(); it++) {
		this->add_entry(it->first, it->second);
	}
}

void Dictio::update_from_other(const Dictio& other) {
	for(std::map<Mot, Traduction>::const_iterator it = other.traductions.begin(); it != other.traductions.end(); it++) {
		if(this->traductions.count(it->first)) {
			this->traductions[it->first] = it->second;
		}
		else {
			this->add_entry(it->first, it->second);
		}
	}
}

void Dictio::save_to_file(const char* file_path) const {
	std::ofstream out(file_path, std::ofstream::out);
	out << *this;
	out.close();
}

std::ostream& operator<<(std::ostream& out, const Dictio& other) {
	for(std::map<Mot, Traduction>::const_iterator it = other.traductions.begin(); it != other.traductions.end(); it++) {
		out << it->first.lower() << " " << it->second.ang.lower() << " " << it->second.esp.lower() << std::endl;
	}

	return out;
}