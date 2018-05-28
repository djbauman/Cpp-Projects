#Date: 8/5/2017
#Description: makefile for Project 3 - Fantasy Game

CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -Wall
#CXXFLAGS += -pedantic-errors
CXXFLAGS += -g


SRCS += Creature.cpp
SRCS += Barbarian.cpp
SRCS += Vampire.cpp
SRCS += BlueMen.cpp
SRCS += Medusa.cpp
SRCS += HarryPotter.cpp
SRCS += Game.cpp
SRCS += main.cpp
SRCS += getInput.cpp
SRCS += Menu.cpp
SRCS += Selection.cpp


#ZF = 

HZ += Creature.hpp
HZ += Creature.hpp
HZ += Barbarian.hpp
HZ += Vampire.hpp
HZ += BlueMen.hpp
HZ += Medusa.hpp
HZ += HarryPotter.hpp
HZ += Game.hpp
HZ += getInput.hpp
HZ += Menu.hpp
HZ += Selection.hpp
HZ += makefile


#compile program
game: ${SRCS}
	${CXX} ${CXXFLAGS} ${SRCS} -o game

#clean up extra files
clean:
	rm game

	#zip all files
zip:
	zip -D ${ZF} ${SRCS} ${HZ} ${XTR}
