#include <iostream>

using namespace std;

//Swap data using templates.

template <typename T>
void Swap(T &n1, T &n2){
	T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int main(){
	
	int i1 = 1, i2 = 2;
	float f1 = 1.1, f2 = 2.2;
	char c1 = 'a',c2='b';
	
	
	cout<<"Before passing data to the function template..\n";
	cout<<"i1 = "<<i1<<"\ni2 = "<<i2<<"\n";
	cout<<"f1 = "<<f1<<"\nf2 = "<<f2<<"\n";
	cout<<"c1 = "<<c1<<"\nc2 = "<<c2<<"\n";
	
	Swap(i1,i2);
	Swap(f1,f2);
	Swap(c1,c2);
	
	
	
	cout<<"After passing data to the function template..\n";
	cout<<"i1 = "<<i1<<"\ni2 = "<<i2<<"\n";
	cout<<"f1 = "<<f1<<"\nf2 = "<<f2<<"\n";
	cout<<"c1 = "<<c1<<"\nc2 = "<<c2<<"\n";
	
	
	return 0;
}