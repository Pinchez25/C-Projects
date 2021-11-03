#include <iostream>

using namespace std;

int main()
{
	string text = "Hello";
	
	cout<<text[0]<<endl;//H
	
	text[0] = 'J';
	
	cout<<text;//Jello
	
	return 0;
}