#Date: 7/30/2017
#Description: makefile for Lab 5 - Recursion

CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -Wall
#CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

SRCS = arraySum.cpp
SRCS += getInput.cpp
SRCS += main.cpp
SRCS += Menu.cpp
SRCS += reverse.cpp
SRCS += Selection.cpp
SRCS += triangleSum.cpp


ZF = Daniel_Bauman_Lab5.zip

HZ += arraySum.hpp
HZ += getInput.hpp
HZ += main.hpp
HZ += Menu.hpp
HZ += reverse.hpp
HZ += Selection.hpp
HZ += triangleSum.hpp
HZ += makefile


#compile program
output: ${SRCS}
	${CXX} ${CXXFLAGS} ${SRCS} -o output

#clean up extra files
clean:
	rm output

	#zip all files
zip:
	zip -D ${ZF} ${SRCS} ${HZ} ${XTR}
