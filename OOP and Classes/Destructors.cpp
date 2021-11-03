#include <iostream>

using namespace std;

class HelloWorld{
	public:
		//contructor
		HelloWorld(){
			cout<<"Constructor is called"<<endl;
		}
		
		//Destructor
		~HelloWorld(){
			cout<<"Destructor is called"<<endl;
		}
		//Member function
		void display(){
			cout<<"Hello World"<<endl;
		}
};

int main()
{
	//Destructors destroy/delete an object.
	//Syntax: ~class_name(){ //some code } NOTE: destructor declaration begin with a tilde(~) sign.
	
	/*
	   A destructor is called automatically:
	    1.when the program finishes executing
	    2. When a scope (the {} parenthesis) containing local variable ends.
	    3.When you call the delete operator.
	    
	    NOTE: destructors have no parameters and no return type.
	
	*/
	HelloWorld hw;
	hw.display();
	
	/*
	Constructor is called
    Hello World
    Destructor is called
	
	
	*/
	
	return 0;
}