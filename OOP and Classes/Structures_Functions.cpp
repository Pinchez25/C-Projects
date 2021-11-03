#include <iostream>

using namespace std;

struct Person{
	char name[50];
	int age;
	float salary;
	
};

void displayData(Person);

int main()
{
    Person p;
	cout<<"Enter full name: ";
	cin.get(p.name, 50);
	
	
	cout<<"Enter age: ";
	cin>>p.age;
	
	cout<<"Enter salary: ";
	cin>>p.salary;
	
	displayData(p);
	
	return 0;
}
void displayData(Person p1){
	cout<<"\nDisplaying Information......\n";
	cout<<"Name: "<<p1.name<<endl;
	cout<<"Age: "<<p1.age<<endl;
	cout<<"Salary: "<<p1.salary<<endl;
}