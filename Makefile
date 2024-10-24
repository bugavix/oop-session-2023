run : all

all : main
	g++ -o a.out obj/main.o

main: src/main.cpp obj
	g++ -c src/main.cpp -o obj/main.o

obj :
	mkdir obj