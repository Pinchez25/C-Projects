#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
	   C++ fstream library allows us to work with files.There are 3 objects 
	   included in this library:
	      1. ofstream - creates and writes to files.
	      
	      2. ifstream - Reads from files.
	      
	      3. fstream - A combo of ofstream and ifstream: creates,reads and
                 writes to files.
	
	*/
	
	//create and open a text file. We use ofstream or fstream object
	// and specify the name of the file.
	ofstream MyFile("filename3.txt");
	
	//write to the file
	MyFile<<"Files can be tricky, but it is fun enough";
	
	//Close the file
	MyFile.close();
	
	
	return 0;
}