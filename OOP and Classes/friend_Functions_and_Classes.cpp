#include <iostream>

using namespace std;

class Distance{
	private:
		int meter;
		
		//friend function
		friend int addFive(Distance);
    public:
    	Distance():meter(0){}
};

//defining the friend function
int addFive(Distance d){
	//Access private members from the friend function
	d.meter +=5;
	return d.meter;
}

int main()
{
	/*
	   Friend functions allow us to access member functions from outside the class.It can access
	   private and protected data of a class.
	   They are declared using the friend keyword inside the body of the class:
	        
	        class class_Name{
				......................
				friend returnType functionName(args);
				......................
			};
	   
	   Friend classes
	*/
	
	Distance D;
	cout<<"Distance: "<<addFive(D);//Distance: 5
	
	return 0;
}