CC=g++
CFLAGS=-c -Wall

all: main

main: main.o algo.o
	$(CC) main.o algo.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

algo.o: algo.cpp
	$(CC) $(CFLAGS) algo.cpp 

clean:
		rm -rf *.o main algo
