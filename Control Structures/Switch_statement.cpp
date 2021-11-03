#include <iostream>

using namespace std;

int main(){
	char grade;
	cout<<"Enter the grade: ";
	cin>>grade;
	
	
	switch(grade)
	{
	case 'A':
		cout<<"------------------------\n";
		cout<<"Excellent\n";
		cout<<"------------------------";
		break;
	case 'B':
		cout<<"------------------------\n";
		cout<<"Very good";
		cout<<"\n------------------------";
		break;
	case 'C':
		cout<<"------------------------\n";
		cout<<"Fair";
		cout<<"\n------------------------";
		break;
	case 'D':
		cout<<"------------------------\n";
		cout<<"Try harder";
		cout<<"\n------------------------";
		break;
	
	default:
		cout<<"Invalid grade";
		break;
	}
	return 0;
}

