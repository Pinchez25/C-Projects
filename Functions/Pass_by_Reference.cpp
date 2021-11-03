#include <iostream>

using namespace std;

/*
  We can also pass reference to the function as a parameter rather than the normal variables.
  This can be useful when u need to change the value of the args.
*/

void swapNums(int &x, int &y){
	int z = x;
	x = y;
	y = z;
}

int main(){
	
	int firstNum = 10;
	int secondNum = 20;
	
	
	cout<<"Before swap: "<<"\n";
	cout<<firstNum<<secondNum<<"\n";
	
	/*
	   Before swap:
       1020
	*/
	
	//Call the function, which will change the values of firstNum and secondNum
	swapNums(firstNum,secondNum);
	
	cout<<"After swap: "<<"\n";
	cout<<firstNum<<secondNum<<endl;
	
	/*
	   After swap:
       2010
	*/
	
	
	
	return 0;
}