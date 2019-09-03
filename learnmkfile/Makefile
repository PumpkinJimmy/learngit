main: main.o primetest.o
	g++ -g main.o primetest.o -o main
main.o: main.cpp primetest.hpp
	g++ -c -g main.cpp
primetest.o: primetest.cpp primetest.hpp
	g++ -c -g primetest.cpp

