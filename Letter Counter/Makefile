CC = g++

CFLAGS = -c -Wall -std=c++11



output: letters.o
	$(CC) letters.o -o output


letters.o: letters.cpp
	$(CC) $(CFLAGS) letters.cpp	
	
	
clean:
	rm *.o output