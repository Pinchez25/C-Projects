#include <iostream>

using namespace std;

//Declaration 1.

enum direction{East,West,North,South}dir;

//Declaration 2

enum direction2{E,W,N,S};

int main()
{
	/*
	  Enum is a user defined datatype where we specify a set of values for a variable
	  and the variable can only take one out of small set of possible values.
	  
	  Definition - we use enum keyword to define a Enumeration:
	     enum direction{East,West,North,South}dir;
      In the above, the enumeration name is direction which can only take one of the 4 specified
      vales, the dir at the end of the declaration is an enum variable.
	
	*/
	
	dir = West;
	cout<<dir;//1 - prints out the index of West.
	
	//enum variable declaration
	direction2 dir2;
	dir2 = N;
	cout<<"\n"<<dir2;//2
	
	
	
	/*
	   Enums are used when we expect the variable to have one of the possible set of
	   values eg. an enum variable that holds the direction.Since we have 4 directions, this variable can
	   only take one of them, if we try to assign another random variable, it throws a compilation error.
	   
	   We can also use enum in swith statements where all the values that case blocks expect 
	   can be defined in an enum.
	   
	   To change default values of enum we do the followin:
	       #include <iostream>

           using namespace std;
           enum direction{East=11,West=22,North=33,South=44};
           int main()
           {
	
	         direction dir;
	         dir = South;
	         cout<<dir;//44
	           
          	return 0;
            }
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}