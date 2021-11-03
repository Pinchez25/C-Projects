#include <iostream>

using namespace std;

int main()
{
	int num;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num<100 && num>=1){
		cout<<"It is a 2 digit number\n";
		//nested if
		if (num<50){
			cout<<"The number is also greater than 50\n";
		}
		
	}else if(num<1000 && num>=100){
		cout<<"The number is a 3 digit number";
	}else{
		cout<<"The number is either 1000 or greater than 1000";
	}
	
	return 0;
}