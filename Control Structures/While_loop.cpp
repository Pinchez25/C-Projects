#include <iostream>
using namespace std;

int main()
{
	/*
	   Syntax:
	      while(condition){
			  //statement(s);
		  }
	
	
	*/
	int i=0;
	while(i<11)
	{
		cout<<i<<endl;
		i++;
	}
	
	
	
	cout<<"================================\n";
	cout<<"Display elements in an array";
	cout<<"\n================================\n";
	
	int arr[]={23,5,6,43,54};
	int j=0;
	
	while(j<5)
	{
	  cout<<arr[j]<<endl;
		j++;	
	}
	
	return 0;
}