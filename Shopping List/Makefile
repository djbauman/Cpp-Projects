CC = g++

CFLAGS = -c -Wall -std=c++11



output: Selection.o Menu.o getInput.o Item.o List.o main.o
	$(CC) Selection.o Menu.o getInput.o Item.o List.o main.o -o output

Item.o: Item.hpp Item.cpp
	$(CC) $(CFLAGS) Item.cpp

List.o: List.hpp List.cpp
	$(CC) $(CFLAGS) List.cpp
	
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