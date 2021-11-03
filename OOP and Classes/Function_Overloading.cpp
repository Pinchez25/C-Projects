#include <iostream>

using namespace std;

class Addition{
	public:
		int sum(int num1, int num2){
			return num1 + num2;
		}
		int sum(int num1, int num2, int num3){
			return num1 + num2 + num3;
		}
		//different return type with different type of parameters.
		//Note same number and type of parameters as another function will cause a compilation error.
		//That is: the return type does not matter. 
		double sum(double num1, double num2){
		      return num1 + num2;
		}
};

int main()
{
	/*'
	   Function overloading allows you to have more than one function with the same name
	   but different parameter list. It is compile time polymorphism.
	   
	   Overloading functions should have different type, number or sequence of parameters.
	   
	   examples:
	      1. Different number of parameters:
	           
	           sum(int a, int b);
	           sum(int a, int b, int c);
	           
          2. Different sequence:
              sum(int a, double b);
              sum(double a, int b);
              
	*/
	Addition ad;
	cout<<ad.sum(20,34)<<endl;
	cout<<ad.sum(20.87,34.98)<<endl;
	cout<<ad.sum(34,56,78)<<endl;
	
	return 0;
}