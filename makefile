main: main.o person.o
	g++ main.o person.o -o lab3.out 
	
main.o:	main.cpp person.h
	g++ -c main.cpp 

person.o:	person.cpp person.h
	g++ -c person.cpp 