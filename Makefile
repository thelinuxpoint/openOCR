CC=g++

# this is the main file for testing of programs
Main=./src/App.cpp

headers=$(wildcard ./src/headers/*)

cpps=$(wildcard ./src/General/*)
cp=$(addprefix ./src/General/, $(notdir $(cpps)))


objects=$(cp:.cpp=.o)
	
obj=$(addprefix ./build/, $(notdir $(objects)))

# This the main 
default: $(headers) $(cpps) $(obj)
	@echo "Building => opencpr v0.1.0"
	@$(CC) -std=c++20 $(Main) -o ./build/opencpr $(obj)

# Our Data Set Compiling Process Goes Here
./build/dset.o: ./src/headers/dset.hpp ./src/General/dset.cpp
	@printf "Compiling dset.cpp ... "
	@$(CC) -std=c++20 -c ./src/General/dset.cpp -o $@
	@echo "[ok]"

# Our Statistical Mathematics File Compilation goes here
./build/statistic.o: ./src/headers/statistic.hpp ./src/General/statistic.cpp
	@printf "Compiling statistic.cpp ... "
	@$(CC) -std=c++20 -c ./src/General/statistic.cpp -o $@
	@echo "[ok]"
# 
./build/hexstr.o:./src/headers/hexstr.hpp ./src/General/hexstr.cpp
	@printf "Compiling hexstr.cpp ... "
	@$(CC) -std=c++20 -c ./src/General/hexstr.cpp -o $@
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
