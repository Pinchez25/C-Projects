#include <iostream>
using namespace std;
int main()
{
	/*
	  Syntax:
	    for(initialization;conditio;increment/decrement){
			
			//Stetements
		}
	
	*/
	
	//print even numbers btwn 1-100
	
	for(int i=1;i<=100;i++){
		if(i%2==0){
			cout<<"Even number: "<<i<<endl;
		}
	}
	/*
	  Infinite loop -> where the condition never returs false
	    eg. for(int i=1;i>=1;i++){
			cout<<i;
		}
		     OR
         for(;;){
			 //statements();
		 }
	  
	
	*/
	
	cout<<"================================\n";
	cout<<"Display elements in an array";
	cout<<"\n================================\n";
	
	int arr[]={23,5,6,43,54};
	
	for(int a=0;a<5;a++){
		cout<<arr[a]<<endl;
	}
	
	

	
	return 0;
}