#include <iostream>
#include <cmath>
using namespace std;

//Function declaration
int sum(int,int);

//Main function
int main()
{
	//Calling the function
	cout<<sum(1,99);//100
	
	//pow is a built-in function defined in the cmath header
	int power = pow(2,5);//32
	
	cout<<"\n"<<power<<endl;
	
	
	return 0;
}

//Function defined after the main method

int sum(int num1, int num2){
	int n = num1 + num2;
	return n;
}

/*
  If you define a function before the main function, then you dont need to do the
  function declaration. If u are writing ur function after the main() function, then you
  need to declare the function 1st, else u get a compilation error.
  
  Function declaration syntax:
     return_type function_name(parameter_list);
  NB: you can avoid parameter names in the parameter list 
      ie. int sum(int,int); instead of int sum(int num1, int num2);
      
  
  Function definition: 
     This is writing the full body of the function.
     Syntax: 
         return_type function_name(parameter_list){
			 //Statements inside the function
		 }

		 
   Calling a function:
       function_name(parameters);
       
       
       
       TYPES OF FUNCTIONS IN C++
       
       
       1. BUILT-IN FUNCTIONS
       
         -These are the library functions that need not be declared or defined as they
          are already written in the c++ libraries eg. iostream, cmath etc.
       
       2. USER-DEFINED FUNCTIONS
           -Are the functions that we declare and write in our programs.
    
     
*/























