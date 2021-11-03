#include <iostream>

using namespace std;

/*
   When a variable is declared as reference, it bkams an alternative name for an existing variable.
   A variable can be declared as reference by putting '&' in the declaration.

*/

int main(){
	
	int x = 10;
	
	//ref is a reference to x
	int& ref = x;
	
	
	//Value of x is now changed to 20
	ref = 20;
	cout<<"x = "<<x<<endl;//	x = 20
	
	//value of x changed to 30
	x = 30;
	cout<<"ref = "<<ref<<endl;// ref = 30
	
	
	return 0;
}