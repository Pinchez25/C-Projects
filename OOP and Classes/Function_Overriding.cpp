#include <iostream>

using namespace std;
class Base
{
private:
	
protected:
	
public:
	void disp(){
		cout<<"Function of the parent class\n";
	}
	
};
class Derived: public Base
{
private:
	
protected:
	
public:
	void disp(){
		cout<<"Function of the child class\n";
		
		//call the overridden function
		Base::disp();
		
	}
	
	
};
int main()
{
	/*
	   Function overriding allows us to have a same function in child class which is 
	   already present in the parent class.
	   
	   If you wanna call the overriden function in the derived class, you reference the
	   base class and point it to the object of the child class.
	   
	   To call the overridden function from the overridding function do like this:
	     parent_class_name::function_name;
	*/
	Derived ob = Derived();
	ob.disp();//Function of the child class
	
	//Call the overridden function in the child class
	Base obj = Derived();
	obj.disp();//Function of the parent class
	
	return 0;
}