all: main

clean: main main.o function.o
	rm -rf main main.o function.o
	
main: main.o function.o
	gcc -o main main.o function.o

main.o: main.c prototipo.h
	gcc -c -o main.o main.c

function.o: prototipo.h function.c
	gcc -c -o prototipo.o prototipo.c