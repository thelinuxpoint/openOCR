#include<iostream>
#include "./headers/App.hpp"
void help(){
	std::printf("[1] Arithmatic Encoding \n\
[2] Huffman Encoding\n");
}

int main(int argc, char const *argv[])
{
	help();
	std::cout<<opencpr::Permutation(50)<<std::endl;
	return 0;
}
