// standard imports ###############
#include<iostream>
#include<cmath>

// our imports ####################
#include "../headers/tools.hpp"

//#################################
//    n!

unsigned long opencpr::factorial(unsigned long var){
	if(var==1 or var==0 ){return 1;}
	else{return (var*factorial(var-1));}
}
//#################################
//    n!
//  ------      $ also known as no of ways of arrangements 
//  (n-r)!

unsigned long opencpr::permutation(unsigned long n,unsigned long x){
	return factorial(n)/factorial(n-x);
}
//#################################
//     n!
//  -------     $ also known as no of ways of selection 
//  r!*(n-r)!

unsigned long opencpr::combination(unsigned long n,unsigned long x){
	return factorial(n)/(factorial(x)*factorial(n-x));
}
//#################################
//    nCx * P^x * Q^(n-x)
//    probablity that a event occured (n) times

double opencpr::binomial(double p,double q,unsigned long n,unsigned long x){
	return combination(n,x)*pow(p,x)*pow(q,(n-x));
}
//#################################
// This is only for 8 bit unicodes
// "Hello" => "48656c6c6f"
std::string opencpr::hexstr(std::string arg){
	std::string s = "\u3051";
	return s;
}
//#################################
// check if a number is prime
bool opencpr::is_prime(unsigned long arg){
	for (int i = 2; i < arg ; ++i){
		if (arg%i==0){
			return false;
		}
	}
	return true;
}

//#################################
// skewness is a measure of the asymmetry of the probability distribution
// of a real-valued random variable about its mean.
