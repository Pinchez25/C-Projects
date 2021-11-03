#include <iostream>

using namespace std;

int main()
{
	/*
	   Exception handling in c++ consist of 3 keywords:
	    try,throw and catch.
	    
	    try{
			//block of code that is error prone
			
			throw exception;//throw an exception when a problem arise.
			
		}catch(){
			
			//Block of code to handle errors.
		}
	
	*/
	
	try{
		int age = 15;
		
		if (age>18){
			cout<<"Access granted - you are old enough";
		}else{
			//if age is less than 18, we throw an error to be handled in the catch block.
			throw(age);
		}
	}catch(int myNum){//here catch takes a parameter myNum.
	//we use an int variable myNum, cozz we are throwing an exception of int type
	//in the try block(age) to output the value of age.
		cout<<"Access denied - You must be at least 18 years old.\n";
		cout<<"Age is: "<<myNum<<endl;
	}
	/*
	    You can also use throw keyword to output a reference number, like a custom
	    error number/code for organizing purposes.
	    
	    	try{
		       int age = 15;
		
		       if (age>18){
		           	cout<<"Access granted - you are old enough";
	        	}else{
			
		        	throw 505;
	         	}
         	}catch(int myNum){
		cout<<"Access denied - You must be at least 18 years old.\n";
		cout<<"Error number: "<<myNum<<endl;
	}
	
	*/
	
	return 0;
}