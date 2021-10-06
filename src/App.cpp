#include<iostream>
#include<iomanip>
#include<string>

#include "./headers/App.hpp"


void welcome(){
	std::printf("                  +---------+\n\
================= |\x1b[33m OpenCPR\x1b[0m | =================\n\
                  +---------+\n");
}

int main(int argc, char const *argv[]){
	
	welcome();
	opencpr::DSet<int> d(1,2,3,4,5,6,7,8,9);
	std::cout<<d*2<<std::endl;
	opencpr::Hexstr h("Hello World");
	std::cout<<h<<std::endl;
	return 0;
}
