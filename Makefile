CC=g++
Main=./src/App.cpp
headers=$(wildcard ./src/headers/*)
cpps=$(wildcard ./src/cpp/*)
objects=$(cpps:.cpp=.o)
obj=$(addprefix ./build/, $(notdir $(objects)))


default: $(headers) $(cpps) $(obj)
	@echo "Building => opencpr v0.1.0"
	@$(CC) $(Main) -o ./build/opencpr $(obj)

./build/arithmatic_coding.o: ./src/headers/arithmatic_coding.hpp ./src/cpp/arithmatic_coding.cpp
	@echo "Compiling arithmatic_coding.cpp ... "
	@$(CC) -c ./src/cpp/arithmatic_coding.cpp -o $@

./build/tools.o: ./src/headers/tools.hpp ./src/cpp/tools.cpp
	@echo "Compiling tools.cpp ... "
	@$(CC) -c ./src/cpp/tools.cpp -o $@

./build/huffman_coding.o: ./src/headers/huffman_coding.hpp ./src/cpp/huffman_coding.cpp
	@echo "Compiling huffman_coding.cpp ... "
	@$(CC) -c ./src/cpp/huffman_coding.cpp -o $@

run: ./build/opencpr
	@make
	@echo "Running ... './build/opencpr'"
	@./build/opencpr

install:
	@echo "Not finished yet"
