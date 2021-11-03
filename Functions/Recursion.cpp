#include <iostream>
using namespace std;

int f(int n){
	
	if(n<=1)
		return 1;
	else
	    return n*f(n-1);
}

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<<"Factorial of "<<num<< " is "<<f(num);
	
	return 0;
}

/*
   Recursion is where a function calls itself, the corresponding function is called a
   recursive function.
   
   Example: a factorial function: 
       f(n) = n*f(n-1), base condition: if n<=1 then f(n)=1.

   The base condition prevents the program from throwing a stack overflow eror.
   Recursion divides a problem into smaller problems till the base condition is reached.
   
   There are 2 types of recursion:
   
      A. Direct recursion - When a function calls itself as the factorial function above.
      
      B. Indirect recursion - When a function calls another function and that function calls the 
                    calling function.
   
   
 
*/