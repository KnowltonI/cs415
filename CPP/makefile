vender: dispenser.o main.o cashier.o
	g++ dispenser.o main.o cashier.o -o vender

dispenser.o: dispenser.h dispenser.cpp
	g++ -c dispenser.cpp

cashier.o: cashier.h cashier.cpp
	g++ -c cashier.cpp

main.o: main.cpp dispenser.h cashier.h
	g++ -c main.cpp
