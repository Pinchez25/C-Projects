#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	/*
	   remove() deletes a specified file. It takes a single arg, filename and 
	   returns an integer value. It deletes a file pointed by the parameter.
	   
	   Incase the file to be deleted is opened by a process, the behaviour of
	   remove() is implementation-defined.
	   
	   It returns:
	      1. Zero if the file is successfully deleted.
	      2. Non-zero if error occurs.
	   
	*/
	   char filename[]  = "C:\\Users\\JOSIAH MWANGI\\Desktop\\StudenntManagementDJOAmen.txt";
	   
	   //Deleted the file if the file exists
	   if(remove(filename)!=0){
		   perror("File deletion failed");
	   }else{
		   cout<<"File deleted successfully";
	   }
	   	
	
	return 0;
}