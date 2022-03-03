/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  
  return 0;
}//end main

long Factorial(int no)
{
  int fac=1;
  	
  	for (int r=no; r >= 1; r--) 
	  {
        fac = fac * r;
    }

  return fac;
  
}//end factorial
long nCr(int n, int r)
{
  //r!
  int fac1=1;
  int fac2=1;
  int fac3;
  int x=n-r;
  	
     do{
     	fac1= fac1*r;
     	r--;
	 }while(r>=1);
	 do{
	 	fac2=fac2*x;
	 	x--;
	 }while(x>=1);
	 fac2=fac2*fac1;
     fac3=Factorial(n)/fac2;
     
  return fac3;
    
}//end nCr