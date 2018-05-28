CC = g++

CFLAGS = -c -Wall -std=c++11



output: Selection.o Menu.o getInput.o Die.o LoadedDie.o Game.o main.o
	$(CC) Selection.o Menu.o getInput.o Die.o LoadedDie.o Game.o main.o -o output


Die.o: Die.hpp Die.cpp
	$(CC) $(CFLAGS) Die.cpp
	
LoadedDie.o: LoadedDie.hpp LoadedDie.cpp
	$(CC) $(CFLAGS) LoadedDie.cpp
	
Game.o: Game.hpp Game.cpp
	$(CC) $(CFLAGS) Game.cpp
	
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