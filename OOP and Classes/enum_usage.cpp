#include <iostream>
using namespace std;

//flags to work with button text for windows application.
enum designFlags
{
  ITALICS = 1,
  BOLD = 2,
  UNDERLINE = 4	
}button;

/*
   You can combine 2 or more flags at once without overriding the bitwise OR | operator.
   This allows u to choose 2 or more flags at once.
*/

int main()
{
	/*
	  enum can be used to work with flags, a task that can be accomplished using structures.
	  enums however gives efficiency along with flexibility.
	*/
	int myDesign = BOLD | UNDERLINE;
	cout<<myDesign;//6
	
	//When the output is 6, u always know that bold and underline is used.
	/* 
	
	   Also you can add flag to your requirements:
	       if(myDesign & ITALICS){
			   //code for italics
		   }
	*/
	
	return 0;
}