#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	//Calculate the time taken to add 2 numbers
	time_t start,end;
	
	start = time(NULL);
	
	int a,b;
	cout<<"Enter num1: ";
	cin>>a;
	cout<<"Enter num2: ";
	cin>>b;
	
	int c = a + b;
	
	cout<<"Sum of "<<a<< " and "<<b<<" is "<<c<<endl;
	
	
	end = time(NULL);
	
	cout<<"Time taken to print sum is: "<<difftime(end, start)<<" seconds"; 
	
	return 0;
}