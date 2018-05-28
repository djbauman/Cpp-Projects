CC = g++

CFLAGS = -c -Wall -std=c++11



output: ant.o board.o getInput.o main.o Menu.o Selection.o
	$(CC) ant.o board.o getInput.o main.o Menu.o Selection.o -o output


ant.o: ant.cpp ant.hpp
	$(CC) $(CFLAGS) ant.cpp
	
board.o: board.cpp board.hpp
	$(CC) $(CFLAGS) board.cpp
	
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