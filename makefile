CC=g++
CFLAGS=-c -Wall

all: main

main: main.o algo.o
	$(CC) main.o algo.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

algo.o: algo.cpp algo.hpp
	$(CC) $(CFLAGS) algo.cpp algo.hpp

clean:
		rm -rf *.o main algo
