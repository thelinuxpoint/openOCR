CC=g++
Main=./src/App.cpp
headers=$(wildcard ./src/headers/*)
cpps=$(wildcard ./src/cpp/*)
objects=$(cpps:.cpp=.o)
obj=$(addprefix ./build/, $(notdir $(objects)))


default: $(headers) $(cpps) $(obj)
	@echo "Building => opencpr v0.1.0"
	@$(CC) $(Main) -o ./build/opencpr $(obj)


./build/compression.o: ./src/headers/compression.hpp ./src/cpp/compression.cpp
	@printf "Compiling compression.cpp ... "
	@$(CC) -c ./src/cpp/compression.cpp -o $@
	@echo "[ok]"

./build/shanons.o: ./src/headers/shanons.hpp ./src/cpp/shanons.cpp
	@printf "Compiling shanons.cpp ... "
	@$(CC) -c ./src/cpp/shanons.cpp -o $@
	@echo "[ok]"

./build/tools.o: ./src/headers/tools.hpp ./src/cpp/tools.cpp
	@printf "Compiling tools.cpp ... "
	@$(CC) -c ./src/cpp/tools.cpp -o $@
	@echo "[ok]"


run: ./build/opencpr
	@make
	@echo "Running ... './build/opencpr'"
	@./build/opencpr

install:
	@echo "Not finished yet"
