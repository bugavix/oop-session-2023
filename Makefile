run: all

all: main chaine
	g++ -o a.out obj/main.o obj/chaine.o

main: obj src/main.cpp
	g++ -c src/main.cpp -o obj/main.o

chaine: obj src/chaine.cpp headers/chaine.hpp
	g++ -c src/chaine.cpp -o obj/chaine.o

obj:
	mkdir obj