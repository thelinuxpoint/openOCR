#include<iostream>
#include<iomanip>
#include "./headers/App.hpp"
void help(){
	std::printf("[1] Arithmatic Encoding \n\
[2] Huffman Encoding\n");
}

void welcome(){
	std::printf("================= \x1b[33mOpenCPR\x1b[0m =================\n");
}

int main(int argc, char const *argv[])
{
	welcome();
	help();
	std::cout<<opencpr::factorial(4)<<std::endl;
	std::cout<<opencpr::permutation(3,1)<<std::endl;
	std::cout<<opencpr::combination(4,2)<<std::endl;
	std::cout<<std::setprecision(5)<<opencpr::binomial(0.8,0.2,3,1)<<std::endl;
	return 0;
}
