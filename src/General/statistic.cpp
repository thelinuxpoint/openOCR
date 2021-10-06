//#################################
//(#)Skewness:
// 	  skewness is a measure of the asymmetry of the probability distribution
//    of a real-valued random variable about its mean.

//(#)
//#################################
// standard imports ###############
#include<iostream>
#include<cmath>
#include<any>

// our imports ####################
#include "../headers/statistic.hpp"

//#################################
//    n!

unsigned long opencpr::factorial(unsigned long var){
	if(var==1 or var==0 ){return 1;}
	else{return (var*factorial(var-1));}
}
//#################################
//    n!
//  ------      $ also known as: no of ways of arrangements of r elements
//  (n-r)!

unsigned long opencpr::permutation(unsigned long n,unsigned long x){
	return factorial(n)/factorial(n-x);
}
//#################################
//     n!
//  -------     $ also known as: no of ways of selection 
//  r!*(n-r)!

unsigned long opencpr::combination(unsigned long n,unsigned long x){
	return factorial(n)/(factorial(x)*factorial(n-x));
}
//#################################
//	nCx * P^x * Q^(n-x)
//  probablity that a event occured (n) times
//	Mean = n*p   Variance = n*p*q

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
/* 
@Description:
	When the number of trials, n, in a binomial distribution
   	becomes large (usually taken as larger than ten), the calculations 
   	associated with determining the values of the terms becomes laborious.
   	If n is large and p is small, and the product n*p is less than 5,
   	a very good approxi-mation to a binomial distribution is given by the 
   	corresponding poisson distribution.
@Formula:
	e^-l ( 1 + l + l^2 +  l^3 + ...)
*/

double opencpr::poisson(){
	// not defined yet
	return 1.0;
}

//#################################
// Exponential Distribution


//#################################
// Gamma Distribution


//#################################
// Chi-Square Distribution



/*#################################
[#] Correlation:

@Formula
	r ranges between -1 to +1
	
	[ X1 X2 X3 ... ] [ Y1 Y2 Y3 ... ]
	
	x=(X-X(bar))
	
				∑ x*y
		r = --------------
        	  sqrt(∑x∑y)
*/

//
int opencpr::inverseMod(int a, int m){
    for (int x = 1; x < m; x++)
        if (((a%m) * (x%m)) % m == 1)
            return x;
    return -1;
}
