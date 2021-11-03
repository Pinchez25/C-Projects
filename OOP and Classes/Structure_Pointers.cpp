#include <iostream>

using namespace std;

struct Distance{
	int feet;
	float inch;
	
};


int main()
{
	//create a pointer 'ptr' of type structure 'Distance'.
	Distance *ptr,d;
	
	ptr = &d;
	
	cout<<"Enter feet: ";
	cin>>(*ptr).feet;
	cout<<"\nEnter inch: ";
	cin>>(*ptr).inch;
	
	cout<<"Displaying information."<<endl;
	cout<<"Distance = "<<(*ptr).feet<<" feet "<<(*ptr).inch<<" inches";
	cout<<"\n\nSame as...........\n";
	cout<<"\nDistance = "<<d.feet<<" feet "<<d.inch<<" inches";
	cout<<"\n\nSame as...........\n";
	cout<<"\nDistance = "<<ptr->feet<<" feet "<<ptr->inch<<" inches\n";
	
	return 0;
}