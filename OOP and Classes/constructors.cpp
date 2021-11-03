#include <iostream>
using namespace std;

class myClass{
	public:
		myClass(){
			cout<<"Hello World";
		}
};

int main(){
	/*
	   A constructor is a special method that is automatically called when a
	   class object is created.
	   
	   It is created using the same name as the class, followed n=by parentheses ():
	
       NOTE: A constructor has the same name as the class,it is always public and has no return value.
	
	*/
	
	//A class object calls the constructor automatically.
	myClass mc;

	return 0;
	
}