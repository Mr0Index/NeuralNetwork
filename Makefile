clean: 
	rm -f main.bin

Test: first_test.cpp Node.h Layer.h
	g++ -Wall -o main.bin -cpp first_test.cpp Node.h Layer.h