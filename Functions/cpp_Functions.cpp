#include <iostream>
using namespace std;

/*
	Syntax:
	
	   return_type function_name(parameter_list){
		   //statements
	   }
	
	*/
	
	//example
	int sum(int num1, int num2){
		int num3 = num1 + num2;
		return num3;
	}

int main()
{
	
	//calling the function
	cout<<sum(1,45);//46
	
	
	return 0;
}