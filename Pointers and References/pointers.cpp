#include <iostream>
using namespace std;

int main()
{
	/*
	A pointer is a variable that holds the address of another variable. They have data type just
	like variables.
     
     Syntax:
       data_type *pointer_name;
     
       Pointer Declaration:
       eg. int *p,var -> this pointer p can hold the address of the variable, here p
           is a pointer and var a simple integer variable.
           
      
      Assignment
         To assign the address of variable to pointer we use the ampersand(&).
          eg. p=&var
	
	*/
	
	//Declare a pointer
	int *p, var=101;
	
	//Assignment
	p = &var;
	
	
	cout<<"Address of var: "<<&var<<endl;//Address of var: 0x67fee8
	cout<<"Address of var: "<<p<<endl;//Address of var: 0x67fee8
	cout<<"Address of p: "<<&p<<endl; //Address of p: 0x67feec
	cout<<"Value of var: "<<*p<<endl;//Value of var: 101
	



	
	return 0;
}