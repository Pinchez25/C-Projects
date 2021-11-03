#include <iostream>

using namespace std;

//forward declaration
class classB;

class classA{
	private:
		int numA;
		
		//friend class declaration
		friend class classB;
    public:
    	//constructor to initialize numA to 12
    	classA():numA(12){} 	   
};
class classB{
	private:
		int numB;
    public:
    	classB():numB(1){}
    	
 	//memeber function to add numA
 	//from classA and numB from classB
 	
 	int add(){
		 classA obj;
		 return obj.numA + numB;
	 }
	
};

int main()
{
	//When a class is declared a friend class, all the member functions of 
	//the friend class bkam friend functions.
	//A friend relation in c++ is only granted not taken.
	classB obj;
	cout<<"Sum: "<<obj.add();//Sum: 13
	
	return 0;
}