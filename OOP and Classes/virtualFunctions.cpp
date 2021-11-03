#include <iostream>

using namespace std;

class Base{
	public:
		virtual void print(){
			cout<<"Base function"<<endl;
		}
};
class Derived: public Base{
	public:
		void print(){
			cout<<"Derived function"<<endl;
		}
		/*
		  If we create a pointer of Base type to point to an object of Derived class
		  and call the print() func, it calls the print() func ov the base class.
		  
		  int main(){
			  Derived derived1;
			  Base* base1 = &derived1;
			  
			  //calls function of Base class
			  base1->print();
		  };
		  
		  To avoid this we declare, the print() function of the base class as virtual using
		  the virtual keyword.
		  
		  class Base{
			  public:
			      virtual void print(){
					  
				  }
		  };
		
		*/
};

int main()
{
	/*
	  A virtual function is a member function in the base class that we expect to
	  redefine in derived classes.
	  It is used in the base class inorder to ensure that the function is overridden.
	  This applies to cases where a pointer of base class to an object of a derived class.
	*/
	Derived d;
	//pointer of Base type that points to d;
	Base *base1 = &d;
	
	//calls the member function of the derived class
	base1->print();//Derived function
	
	
	
	/*
	  Since we have declared the print() function of Base class as virtual, this function is
	  even overridden when we use a pointer of Base type that points to the derived object. 
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}