run: all

all: main chaine chaine_ext
	g++ -o a.exe obj/main.o obj/chaine.o obj/chaine_ext.o

main: obj src/main.cpp
	g++ -c src/main.cpp -o obj/main.o

chaine: obj src/chaine.cpp headers/chaine.hpp
	g++ -c src/chaine.cpp -o obj/chaine.o

chaine_ext: obj src/chaine_ext.cpp headers/chaine_ext.hpp headers/chaine.hpp
	g++ -c src/chaine_ext.cpp -o obj/chaine_ext.o

obj:
	mkdir obj