#include <iostream>

using namespace std;

//Returning a structor from a function
struct Student
{
	string stuName;
	int RollNo;
	int Age;
	
};
Student getStudentInfo();
void printStudentInfo(Student);

int main()
{
	Student s;
	s = getStudentInfo();
	printStudentInfo(s);
	
	return 0;
}
Student getStudentInfo(){
	Student s;
	cout<<"Enter the student name: ";
	getline(cin, s.stuName);
	cout<<"Enter the student roll number: ";
	cin>>s.RollNo;
	cout<<"Enter the age of the student: ";
	cin>>s.Age;
	
	return s;
	
}
void printStudentInfo(Student s){
	cout<<"Student Record: "<<endl;
	cout<<"Name: "<<s.stuName<<endl;
	cout<<"Roll NO: "<<s.RollNo<<endl;
	cout<<"Age: "<<s.Age<<endl;
}