#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
	  File handling in c++ is mainly dealt with using 3 classes:
	     1. ofstream - signifies the output file stream and is applied to create
	           files for writing information to files.
         
   	     2. ifstream - signifies the input file stream and is applied for reading
   	            info from files.
   	            
         3. fstream - can be used for both read and write from/to files.
         
      C++ has the following operations in file handling:
          a. open() - creating a file.
          b. read() - reading data.
          c. write() - writing new data.
          d. close() - closing a file.
          
      Opening a file - we can use methods:
         i. bypassing the  file name in the constructor at the time of object creation.
         ii. using the open() function
         
         //open() funxtion syntax:
            void open(const char*file_name, ios::openmode mode);
            
            MOODE     Description
            ------    ------------
              in      Opens a file to read(default for ifstream)
              out     Opens a file to write(default for ofstream)
              binary  Opens file in binary mode.
              app     Opens a file and appends all the outputs at the end.
              ate     Opens a file and moves the ctrl to the end of the file.
              trunc   Removes data in the existing file.
            nocreate  Opens a file if it already exists.
			noreplace Opens a file only if it does not already exist. 
             
	
	
	*/
	
	fstream new_file;
	new_file.open("newfile.txt",ios::out);
	
	if(!new_file){
		cout<<"File creation failed";
	}else{
		cout<<"New file created";
		//Writing to the file
		new_file<<"Learning file handling";
		new_file.close();
	}
	
	
	
	return 0;
}