clean: 
	rm -f main.bin

Test: main.cpp Node.h
	g++ -Wall -o main.bin -cpp main.cpp Node.h