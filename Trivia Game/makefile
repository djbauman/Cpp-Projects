#Date: 8/5/2017
#Description: makefile for Lab 6 - Linked List

CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -Wall
#CXXFLAGS += -pedantic-errors
CXXFLAGS += -g


SRCS += Art.cpp
SRCS += Biology.cpp
SRCS += Chemistry.cpp
SRCS += End.cpp
SRCS += Game.cpp
SRCS += GameOver.cpp
SRCS += Geography.cpp
SRCS += Hall1.cpp
SRCS += Hall2.cpp
SRCS += Hall3.cpp
SRCS += Hall4.cpp
SRCS += History.cpp
SRCS += Math.cpp
SRCS += Mythology.cpp
SRCS += Physics.cpp
SRCS += Player.cpp
SRCS += Room.cpp
SRCS += Start.cpp
SRCS += main.cpp
SRCS += getInput.cpp
SRCS += Menu.cpp
SRCS += Selection.cpp



ZF = Daniel_Bauman_Final_Project.zip

HZ += Art.hpp
HZ += Biology.hpp
HZ += Chemistry.hpp
HZ += End.hpp
HZ += Game.hpp
HZ += GameOver.hpp
HZ += Geography.hpp
HZ += Hall1.hpp
HZ += Hall2.hpp
HZ += Hall3.hpp
HZ += Hall4.hpp
HZ += History.hpp
HZ += Math.hpp
HZ += Mythology.hpp
HZ += Physics.hpp
HZ += Player.hpp
HZ += Room.hpp
HZ += Start.hpp
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
