#include <iostream>
using namespace std;

class myClass{
	//Access specifier
	public:
		int myNum;
		string myString;
};

int main(){
	
	/*
	 -> Classes in c++ are created using the 'class' keyword
	  Syntax:
	    class class_name{}; //Note that at the end of class definition is a semicolon.
	    
      -> Create an object
        A class object is created as:
           className object_name; eg. myClass obj;
           
     -> Class attributes are accessed using the dot syntax on the object:
      
      
	*/
	
	
	
	//Class Object
	myClass obj;
	
	//Access the class attributes and set values
	obj.myNum=34;
	obj.myString = "Some text";
	cout<<obj.myNum<<endl;//34
	cout<<obj.myString<<endl;//Some text
	
	
	//We can also create multiple objects
	
	myClass mc;
	
	mc.myNum=98;
	mc.myString="Peter Thua";
	cout<<mc.myNum<<endl;
	cout<<mc.myString<<endl;

	return 0;
	
}