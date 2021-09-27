CC=g++

# this is the main file for testing of programs
Main=./src/App.cpp

headers=$(wildcard ./src/headers/*)

cpps=$(wildcard ./src/cpp/*)
cp=$(addprefix ./src/cpp/, $(notdir $(cpps)))


objects=$(cp:.cpp=.o)
obj=$(addprefix ./build/, $(notdir $(objects)))

# This the main 
default: $(headers) $(cpps) $(obj)
	@echo "Building => opencpr v0.1.0"
	@$(CC) -std=c++20 $(Main) -o ./build/opencpr $(obj)

# Our Data Set Compiling Process Goes Here
./build/dset.o: ./src/headers/dset.hpp ./src/cpp/dset.cpp
	@printf "Compiling dset.cpp ... "
	@$(CC) -c ./src/cpp/dset.cpp -o $@
	@echo "[ok]"

# Our Statistical Mathematics File Compilation goes here
./build/stats.o: ./src/headers/stats.hpp ./src/cpp/stats.cpp
	@printf "Compiling stats.cpp ... "
	@$(CC) -c ./src/cpp/stats.cpp -o $@
	@echo "[ok]"

# Test Runner
run: ./build/opencpr
	@make
	@echo "Running ... './build/opencpr'"
	@./build/opencpr

install:
	@echo "Not finished yet"

push:
	@git add .
	@git commit -m "Updates"
	@git push -u origin main	
