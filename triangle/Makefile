triangle: mkdir triangle.o
	g++ build/triangle.o -o build/triangle
triangle.o: triangle.cpp
	g++ -c triangle.cpp -o build/triangle.o
mkdir:
	-mkdir build
run: triangle
	./build/triangle
clean:
	-rm -rf build

