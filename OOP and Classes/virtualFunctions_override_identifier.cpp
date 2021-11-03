#include <iostream>

using namespace std;

class Animal{
	private:
		string type;
		
    public:
    	//initialize type
    	Animal():type("Animal"){}
    	
    	//declare virtual function
    	virtual string getType(){
			return type;
		}
};

class Dog: public Animal{
	private:
		string type;
    public:
    	//initialize tyoe
    	Dog():type("Dog"){}
    	
    	string getType() override{
			return type;
		}
};

class Cat: public Animal{
	private:
		string type;
    
 	public:
 		Cat(): type("Cat"){}
 		
 		string getType() override{
			 return type;
		 }
};

void print(Animal* ani){
	cout<<"Animal: "<<ani->getType()<<endl;
}

int main()
{
	/*
	  'override' identifier is very useful to avoid bugs while using virtual functions.
	  
	  This identifier specifies the member functions of the derived classes that override
	  the member function of the base class.
	  
	  Example:
	     
	     class Base{
			 public:
			     virtual void print{
					 // code
				 }
		 };
		 class Derived: public Base{
			 public:
			     void print() override{
					 //code
				 }
		 };
		 
      If we use a function prototype in Derived class and define that function outside of the class,
      the we use the following code:
             class Derived: public Base{
				 public:
				    //function prototype
				    void print() override;
			 };
			 //function definition
			 void Derived::print(){
				 
			 }
     
     	Using the override identifier prompts the compiler to display error messages when mistakes
		made that are otherwise mad when using virtual functions while declaring the member functions 
		of the derived class are made.
		
		Otherwise the program will simply compile but the virtual function will not be overriden.
		Possible mistakes include:
		   1. Functions with incorrect names, e.g. virtual function in the base class is named print(),
		      but accidentally name the overriding function in the derived class as pint().
		  
		   2. Functions with different return types.
		   
		   3. Functions with different parameters.
		   
		   4. No virtual function is declared in the base class.	
     		
	*/
	
	Animal* animal1 = new Animal();
	Animal* dog1 = new Dog();
	Animal* cat1 = new Cat();
	
	
	
	print(animal1);
	print(dog1);
	print(cat1);
	
	
	return 0;
}