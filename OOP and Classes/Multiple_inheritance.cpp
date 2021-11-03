#include <iostream>

using namespace std;

class myClass
{
private:
	
protected:
	
public:
	void fun(){
		cout<<"Content of base 1\n";
	}
	
};
class otherClass
{
private:
	
protected:
	
public:
	void fun2(){
		cout<<"Content of base 2\n";
	}
	
};
class Derived:public myClass, public otherClass
{
private:
	
protected:
	
public:
	
};

int main()
{
	/*
	   This is where a class inherits from more than one base classes.
	   The base classes are seperated with commas.
	
	*/
	Derived d;
	d.fun();
	d.fun2();
	
	
	return 0;
}