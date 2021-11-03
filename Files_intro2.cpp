#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
	    To read from a file, use either ifstream or fstream object, 
	    and the name of the file.
	
	*/
	
	//text string to output the text of the file
	string myText;
	
	//read from the text file
	ifstream readMe("fileame3.txt");
	
	while(getline(readMe, myText))
	{
		cout<<myText;
		
	}
	readMe.close();//Files can be tricky, but it is fun enough
	
	return 0;
}