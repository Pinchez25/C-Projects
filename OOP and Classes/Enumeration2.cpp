#include <iostream>

using namespace std;

enum week{Sunday,Monday,Teusday,Wednesday,Thursday,Friday,Saturday};

int main()
{
	/*
	  An enumeration is a user-defined datat type that consists of integral constants. To define
	  an enumeration, keyword enum is used:
	     
	     enum season{spring, summer, autumn, winter};
	     
      By default, spring is 0, summer is 1 and so on. You can change the value of an enum element
      during declaration(if necessary):
      
          enum season{
			  spring = 0,
			  summer = 4,
			  autumn = 8,
			  winter = 12
		  };
		  
      When u created an enumerated data type, only blueprint for the variable is created. To create
      variables of enum type, do the following:
           
           enum boolean{false, true};
           //inside function
           enum boolean check;
      Here a variable 'check' of type 'enum boolean' is created.You can also declare as:
           
           enum boolean{false, true}check;
	*/
	
	week today;
	today = Wednesday;
	cout<<"Day: "<<today+1;//Day: 4
	
	return 0;
}