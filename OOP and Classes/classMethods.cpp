#include <iostream>
using namespace std;

class myClass{
	public:
		//method inside the class
		void myMethod(){
			cout<<"Hello World";
		}
		//declare a function sum
		void sum(int,int);
	
};

//Define the method sum outside the class.
void myClass::sum(int a, int b){
	int c;
	c = a + b;
	cout<<"Sum: "<<c<<endl;
}

int main(){
	
	/*
	   -> class methods are functions that belong to the class.
	   -> class Methods can be defined in 2 ways:
	      1. Inside a class definition.
	      2. Outside class definition.
	
	   -> When a method is defined outside the class, it must be declared inside the class and then
	      defined outside the class.
       -> This is done by specifying the name of the class, followed by the scope resolution :: operator,
          followed by the name of the function.
	*/
	
	//class object
	myClass mc;
	
	//calling the method
	mc.myMethod();//Hello World
	cout<<"\n";
	//calling the function defined outside the class;
	mc.sum(12,34);

	return 0;
	
}