#include <iostream>
using namespace std;

int main()
{
	/*
	 Used in the following scenarios:
	  
	  a. To come out of a loop instantly/termiate a loop.
	  b. Used in switch control structure
	
	
	*/
	
	int num=10;
	
	while(num<=200)
	{
		cout<<"Value of num is: "<<num<<endl;
		
		if(num==12){
			break;
		}
		num++;
	}
	cout<<"Hey am out of the loop";
	return 0;
}