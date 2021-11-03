#include <iostream>

using namespace std;

struct Person{
	char name[50];
	int age;
	float salary;
	
};

int main()
{
	/*
	  A structure is a collection of variables of different datatypes under a single name.
	  
	  Declaration:
	     struct structure_name{
			 .....
		 };
		 
     Defining a structure variable:
        
        Structure_name struct_variable; eg. Person bill;
        
     Accessing members of a strucure:
        
        We use the dot operator eg. bill.age = 90;
	
	*/
	Person p1;
	cout<<"Enter full name: ";
	cin.get(p1.name, 50);
	
	
	cout<<"Enter age: ";
	cin>>p1.age;
	
	cout<<"Enter salary: ";
	cin>>p1.salary;
	
	cout<<"\nDisplaying Information......\n";
	cout<<"Name: "<<p1.name<<endl;
	cout<<"Age: "<<p1.age<<endl;
	cout<<"Salary: "<<p1.salary<<endl;
	
	
	
	
	return 0;
}