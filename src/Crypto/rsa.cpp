/*###################################
[#]Eulers toient Function

@Description:

@Formula:
	phi(n) = n(1-p^(-1))x(1-p^(-2))x...(1-p^(-k))

	{if p is prime number then number of prime number before it is given by }

	phi(p) = p-1
#####################################*/

struct opencpr::Keypair{
	std::string_view private; // this is the users private key;
	std::string_view public;
}

int gcd(int x,int y){
	if (x == 0)
        return b;
    return gcd(y % x, x);
}
/*###############################
[#]Fernat's Little Theorem
@Description:
	Fermat's little theorem states that if p is a prime number, then for any 
	integer a, the number a^p − a is an integer multiple of p. 

@Formula:
	
#################################*/

/*###############################
@RSA Process:
	select 2 prime numbers p and q
	             +
	 find n = pxq and phi(n)=n-1
                 +
	1<e< phi(n) && gcd(phi,e)==1
				 +
	       d=(1+k*phi(n))/e
	             +
	encrypt message as m^e mod n
#################################*/

// we find encrytion key using gcd and phi
// generate key RSA
Keypair opencpr::gkeyrsa(int nounce){

	return Keypair {};
}
//
Hexstr opencpr::ersa(std::string_view public){

}
//
std::string_view opencpr::drsa(std::string_view private,Hexstr str){

}


