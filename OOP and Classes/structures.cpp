#include <iostream>

using namespace std;

struct Student
{
	string stuName;
	int RollNo;
	int Age;
	
};
//passing structure as argument in a function
void printStudentInfo(Student);

int main()
{
	/*
	   A structure is a compound data type that contains different variables of diff data types.
	
	*/
	Student s;
	cout<<"Enter the student name: ";
	getline(cin, s.stuName);
	cout<<"Enter the student roll number: ";
	cin>>s.RollNo;
	cout<<"Enter the age of the student: ";
	cin>>s.Age;
	printStudentInfo(s);
	
	return 0;
}
void printStudentInfo(Student s){
	cout<<"Student Record: "<<endl;
	cout<<"Name: "<<s.stuName<<endl;
	cout<<"Roll NO: "<<s.RollNo<<endl;
	cout<<"Age: "<<s.Age<<endl;
}