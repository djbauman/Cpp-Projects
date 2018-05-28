CC = g++

CFLAGS = -c -Wall -std=c++11



output: Selection.o Menu.o getInput.o Building.o Person.o University.o main.o
	$(CC) Selection.o Menu.o getInput.o Building.o Person.o University.o main.o -o output

Building.o: Building.hpp Building.cpp
	$(CC) $(CFLAGS) Building.cpp

Person.o: Person.hpp Person.cpp
	$(CC) $(CFLAGS) Person.cpp
	
University.o: University.hpp University.cpp
	$(CC) $(CFLAGS) University.cpp
	
getInput.o: getInput.hpp getInput.cpp
	$(CC) $(CFLAGS) getInput.cpp
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
	
Menu.o: Menu.hpp Menu.cpp
	$(CC) $(CFLAGS) Menu.cpp
	
Selection.o: Selection.hpp Selection.cpp
	$(CC) $(CFLAGS) Selection.cpp
	
clean:
	rm *.o output