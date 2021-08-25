// standard imports ###############
#include<iostream>
#include<cmath>
// our imports ####################
#include "../headers/tools.hpp"

//#################################

unsigned long opencpr::factorial(unsigned long var){
	if(var==1 or var==0 ){return 1;}
	else{return (var*factorial(var-1));}
}

//#################################

unsigned long opencpr::permutation(unsigned long n,unsigned long x){
	return factorial(n)/factorial(n-x);
}

//#################################

unsigned long opencpr::combination(unsigned long n,unsigned long x){
	return factorial(n)/(factorial(x)*factorial(n-x));
}

//#################################

double opencpr::binomial(double p,double q,unsigned long n,unsigned long x){
	return combination(n,x)*pow(p,x)*pow(q,(n-x));
}
