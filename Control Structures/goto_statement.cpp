#include <iostream>
using namespace std;

int main()
{
	//used for transferring the cotrol of a program to a given label;
	//Syntax: goto label_name;
	
	//rarely used. In their place we use, break and continue.
	/*
	    Program structure
	    
	    
	    label1:
        ...
        ...
        goto label2;
        
        ...
        ..
        
        label2:
        ...
	
	
	
	*/
	
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num%2==0){
		goto print;
	}
	else{
		cout<<"Odd number\n";
	}
	print:
	cout<<"Even number";
	
	
	return 0;
}