CC = g++

CFLAGS = -c -Wall -std=c++11



output: main.o matrix.o determinator.o
	$(CC) main.o matrix.o determinator.o -o output


main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

matrix.o: matrix.cpp matrix.hpp
	$(CC) $(CFLAGS) matrix.cpp

determinator.o: determinator.cpp determinator.hpp
	$(CC) $(CFLAGS) determinator.cpp

clean:
	rm *.o output