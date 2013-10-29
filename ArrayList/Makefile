ArrayListTest: mkdir ArrayListTest.o  ArrayList.o
	g++ build/ArrayListTest.o ArrayList.o -o build/ArrayListTest
ArrayListTest.o: ArrayListTest.cpp ArrayList.h
	g++ -c ArrayListTest.cpp -o build/ArrayListTest.o
	g++ -c ArrayList.h -o build/ArrayList.o

mkdir:
	-mkdir build
run: ArrayListTest
	./build/ArrayListTest
clean: 
	-rm -rf build

