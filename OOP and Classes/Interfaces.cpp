#include <iostream>

using namespace std;

class Animal
{
private:
	
protected:
	
public:
	//pure virtual function
	virtual void sound() = 0;
	
	//Normal member function
	void sleeping(){
		cout<<"Sleeping";
	}
};
class Dog: public Animal{
	public:
		void sound(){
			cout<<"Woof"<<endl;
		}
};


int main()
{
	/*
	   Abstract cass and interfaces in c++ are used interchangeably. A class with
	   pure virtual function is known as abstract class.
	   
	   Example of a pure vitual function:
	     virtual void fun() = 0;
	     
       You can call this an abstract function as it has no body.The derived class must give
       an implementation to all the pure virtual functions of parent class, else
       it will become abstract class by default.
	
	*/
	Dog dg;
	dg.sound();
	dg.sleeping();
	/*
	   NOTE: Any classs that has a pure virtual function is an abstract class.
        We can not create the instance of abstract class eg. Animal obj;
        
        We can create pointer and reference of base abstract class points to the instance
        of child class eg.
           Animal *obj = new Dog();
           obj->sound();
        Abstract classes can have constructors.
        If the derived class does not implement the pure virtual function of parent class,
        then the derived class becomes abstract.
	
	*/
	
	return 0;
}