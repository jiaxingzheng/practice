quadrangle: mkdir quadrangle.o
	g++ build/quadrangle.o -o build/quadrangle
quadrangle.o: quadrangle.cpp
	g++ -c quadrangle.cpp -o build/quadrangle.o
mkdir:
	-mkdir build
run: quadrangle
	./build/quadrangle
clean:
	-rm -rf build
	
