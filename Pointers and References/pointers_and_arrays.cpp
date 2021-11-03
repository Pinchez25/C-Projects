#include <iostream>
using namespace std;

int main()
{
	//Pointer declaration
	int *p;
	
	//Array declaration
	int arr[] = {1,2,3,4,5,6};
	
	//Assignment
	//Do not use the ampersand(&) to assign coz arr reps the address of the array.
	//NOTE: for all arrays do not use the & to assign. ie. p = &arr is incorrect
	p = arr;
	
	for(int i=0;i<6;i++){
		cout<<*p<<endl;
		//++ moves the pointer to the next int position
		p++;
	}
	/*
	 
	 //Pointer moves to the next int position
	    p++
	    
	 //Pointer moves to the next int position
	    ++p
	    
     //All of the following increment the value of variable that the pointer p points.
        ++*p; , ++(*p); , ++*(p);
	
	
	*/
	
	return 0;
}