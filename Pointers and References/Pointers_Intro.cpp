#include <iostream>

using namespace std;

//Pointers store address of variables or a memory location.
//Suntax: datatype *var_name
//To access address of a variable to a pointer, we use the unary operator & that returns 
// the address of that variable.

//Another unary operator *(asteric) is used to:

//     1. Declare a pointer variable ie. a pointer is declared with * b4 its name.
//     2. Access the value stored in the address we use * to return the value of the
//        value located at the address specified by its operand. This is called Deferencing.


int main(){
	
	int x;
	
	int var = 10;
	
	//*ptr pointer stores the address of var variable &var
	int *ptr = &var;
	
	//Print the address of x
	cout<<&x<<endl;//0x67fefc
	
	//print the value at address stored in ptr.//NB: * outputs the value of the address stored by the pointer.
	cout<<"Value of var = "<<*ptr<<endl;//Value of var = 10
	
	//Address of the var variable
	cout<<"Address of var variable = "<<ptr<<endl;//Address of var variable = 0x67fee4
	
	//We can also use ptr as lvalue(Left Hand side of assignment).
	
	*ptr = 20;//Value at address is now 20;
	cout<<*ptr<<endl;//20
	cout<<var<<endl;//20
	
	
	return 0;
}