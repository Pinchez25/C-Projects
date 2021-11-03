#include <iostream>

using namespace std;

//Add members of 2 diff classes using friend functions

//forward declarartion
class classB;//since the friend function in classA is using classB which is not yet declared
             //we have to forward declare it for it to work.

class classA{
	private:
		int numA;
		
		//friend function declaration
		friend int add(classA, classB);
	public:
		//Constructor to initialize numA to 12
		classA():numA(12){}
};
class classB{
	private:
		int numB;
		
		//friend function declaration
		friend int add(classA, classB);
	public:
		//constructor to initialize numB to 1
		classB():numB(1){}
	
};

//Access members of both classes
int add(classA obj, classB obj2){
	return (obj.numA + obj2.numB);
}


int main()
{
	//A meaningful use of friend functions would be operating on objects of 2 diff
	//classes.
	
	classA objA;
	classB objB;
	
	cout<<"Sum: "<<add(objA,objB);//Sum: 13
	
	
	return 0;
}