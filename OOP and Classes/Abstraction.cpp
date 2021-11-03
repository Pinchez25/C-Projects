#include <iostream>

using namespace std;

class AbstractionExample
{
private:
	int num;
	char ch;
	
protected:
	
public:
	void setMyValues(int n, char c){
		num = n;
		ch = c;
	}
	void getMyValues(){
		cout<<"Number is: "<<num<<endl;
		cout<<"Char is: "<<ch<<endl;
	}
	
};

int main()
{
	/*
	   This is where you show only the relevant details to the user and hide the
	   irrelevant ones.
	*/
	AbstractionExample ex;
	ex.setMyValues(100,'X');
	ex.getMyValues();
	
	
	return 0;
}