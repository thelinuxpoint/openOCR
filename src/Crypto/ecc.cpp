/*
[#]Elliptic Cuve Crytography 

@Description:
	it uses a trapdoor function
	
	A->B can
	A<-B can't

	1.	{y^2 = X^3 + a*X + b}->this is the curve
	2.  a Generator point G 
	3.  generate private key from Curve and G 
	4.  obtain public key from public = private*G
	5.  public = (x , y) cordinates

private key (dₐ) 

r = x₁ mod n

s = k⁻¹(e + rdₐ) mod n

*/
