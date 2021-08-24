#include<iostream>
#include "../headers/tools.hpp"

unsigned long opencpr::Permutation(unsigned long var){
	if(var==1){return 1;}
	else{ return (var*Permutation(var-1)); }
}

