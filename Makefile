register: main.o register.o
		g++ -o register main.o register.o
main.o: main.cpp register.h
		g++ -c main.o main.cpp
register.o: register.cpp register.h
		g++ -c register.cpp