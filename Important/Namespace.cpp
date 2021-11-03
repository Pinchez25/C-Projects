#include <iostream>

using namespace std;

namespace myNameSpace{
	int myData;
}

int main()
{
	/*
	  A namespace is a named scope that we can use to organize our code logically ie,
	  it is a declarative block which is bounded using a scope name(namespace name).
	  
	  This ensures that variables, functions and classes with similar functionality are in
	  the same scope.
	  
	  Declaration:
	     
	     namespace namespace_name{
			 //variabes, functions, classes etc.
		 }
      To access members of a namespace, we use the scope resolution operator(::);
	*/
	myNameSpace::myData = 100;
	cout<<"Accessed myNameSpace::myData! Assigning value to it :"<<myNameSpace::myData<<endl;
	
	return 0;
}