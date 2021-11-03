#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
	/*
	   Assertions are statements used to test assumptions made by programmer.
	   eg. we may use assertion to check if pointer returned by malloc() is NULL or not.
	   
	   Syntax:
	      void assert(int expression);
	      
        If the expression evaluates to 0(false), then the expression,sourcecode filename,
        and line number are sent to the standard error and then abort() func is called.
	*/
	int x = 7;
     
    //Some big codein b2in and let's say x is accidentally changed to 9.
	x = 9;
	
	//The programmer assumes x to be 7 in the rest of the code.
    assert(x==7);
	
	//Rest of the code
	
	return 0;
}