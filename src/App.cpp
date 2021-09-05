#include<iostream>
#include<iomanip>
#include<string>

#include "./headers/App.hpp"

void help(){
	std::printf("[1] Arithmatic Encoding \n\
[2] Huffman Encoding\
\n");
}

void welcome(){
	std::printf("                  +---------+\n\
================= |\x1b[33m OpenCPR\x1b[0m | =================\n\
                  +---------+\n");
}

int main(int argc, char const *argv[]){
	
	welcome();
	help();
	return 0;
}
