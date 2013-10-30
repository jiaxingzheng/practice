main: mkdir main.o  Queue.o 
	g++ build/main.o Queue.o -o build/main
main.o: main.cpp Queue.h Queue.cpp
	g++ -c main.cpp -o build/main.o
	g++ -c Queue.h -o build/Queue.o
mkdir:
	-mkdir build
run: main
	./build/main
clean: 
	-rm -rf build
	-rm Queue.o
	
	

