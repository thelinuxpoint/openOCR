CC=g++
Main=./src/App.cpp
headers=$(wildcard ./src/headers/*)

default: $(headers)
	@g++ $(Main) -o ./build/opencpr

run: ./build/opencpr $(headers) ./src/App.cpp
	@echo "Running ... opencpr"
	@./build/opencpr

install:
	@echo "Not finished yet"
