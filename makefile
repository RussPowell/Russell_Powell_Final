earth: earth.o activator.o CinReader.o 
	g++ -Wall -g -o Earth earth.o CinReader.o activator.o

activator: activator.cpp
	g++ -Wall -g -o activator.cpp
	
# rocket: rocketship.cpp
# 	g++ -Wall -g -o rocketship.cpp
	