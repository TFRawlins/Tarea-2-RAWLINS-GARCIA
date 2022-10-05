CC = g++
flags = -std=c++11

exe = main

$(exe): main.o stack.o node.o 
	$(CC) $(flags) main.o stack.o node.o -o $(exe)

node.o: node.cpp node.hpp
	$(CC) $(flags) -c node.cpp -o node.o

stack.o: stack.cpp stack.hpp
	$(CC) $(flags) -c stack.cpp -o stack.o

main.o: main.cpp stack.hpp node.hpp
	$(CC) $(flags) -c main.cpp -o main.o

run: $(exe)
	./$(exe)

clean:
	rm $(exe) *.o