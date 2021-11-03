#include <iostream>

using namespace std;

//Function Declaration
void myFunction(){
	cout<<"Hello Peter"<<endl;
}

//Function declaration
void myFunction2();

void myFunction3(string,string);

void myFunction4(string fname="Peter"){
	cout<<"A function with a default parameter"<<endl;
	cout<<"My name is "<<fname<<endl;
}
int myFunction5(int x, int y){
	int z = x + y;
	return z;
}


int main(){
	
	//Calling a function
	myFunction();//Hello Peter
	
	//call the function
	myFunction2();//I am defined outside the main function
	
	//call the parameterised function'
	myFunction3("Peter","Thua");
	/*
	   This is a parameterised function
       My name is Peter Thua
	*/
	//has a default parameter, so can be called without arguments
	myFunction4();
	myFunction4("Pinchez");
	
	/*
	  A function with a default parameter
      My name is Pinchez
	
	*/
	
	cout<<myFunction5(4,5)<<endl;//9
	
	return 0;
}

//Define the function outsise the main function
void myFunction2(){
	cout<<"I am defined outside the main function"<<endl;
}
void myFunction3(string fname, string lname){
	cout<<"This is a parameterised function"<<endl;
	cout<<"My name is "<<fname<<" "<<lname<<endl;
	
}



















