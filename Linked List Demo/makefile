#Date: 8/5/2017
#Description: makefile for Lab 6 - Linked List

CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -Wall
#CXXFLAGS += -pedantic-errors
CXXFLAGS += -g


SRCS += Queue.cpp
SRCS += main.cpp
SRCS += getInput.cpp
SRCS += Menu.cpp
SRCS += Selection.cpp



ZF = Daniel_Bauman_Lab6.zip

HZ += Queue.h
HZ += getInput.hpp
HZ += Menu.hpp
HZ += Selection.hpp
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
