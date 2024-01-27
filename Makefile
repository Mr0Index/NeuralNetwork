clean: 
	rm -f main.bin

Test: main.cpp Node.h Layer.h
	g++ -Wall -o main.exe -cpp main.cpp Node.h Layer.h