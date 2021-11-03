#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	/*
	  puts() function writes a string to stdout.
	  
	     ###############puts() prototype#####################
	       int puts(const char *str);
         - puts() takes a null terminated string str as its argument and writes it to stdout.
           The terminating xter '\0' is not written but it adds a new line xter '\n' after
           writing the string.
           
           A call to puts() is same as calling fputc() repeatedly, the main difference being
           that puts() appends a new xter to the output and fputs() doesn't.
           
           Defined in <cstdio> header file.
           
           On success it returns a non-negative integer On failure it reurns EOF and sets the
           error indicator on stdout.
	
	*/
	        char str1[] = "Happy New Year\0";
         	char str2[] = "Happy Birthday";
         	
         	puts(str1);
         	/* Printed on new line since '/n' is added.*/
         	puts(str2);
	
	return 0;
}