#include <iostream>
#include <cctype>

using namespace std;

void identify_alpha_numeric(char a[]){
	int count_alpha=0, count_digit=0;
	
	for(int i=0;a[i] != '\0';i++){
		//check if xter is alphabet
		
		if(isalpha(a[i]))
			count_alpha++;
		//check if xter is digit
		if(isdigit(a[i]))
			count_digit++;
		
	}
	cout<<"The number of alphabets is: "<<count_alpha<<endl;//The number of alphabets is: 18

	cout<<"The numbers of digits is: "<<count_digit<<endl;//The numbers of digits is: 4
}

char* identify_convert_ul(char a[]){
	int count_upper=0,count_lower=0;
	for(int i=0;a[i] != '\0';i++){
		//check uppercase xters
		if(isupper(a[i])){
			count_upper++;
			a[i] = tolower(a[i]);
		}
		
		//check lowercase xters
		else if(islower(a[i])){
			count_lower++;
			a[i] = toupper(a[i]);
		}
	}
	
	cout<<"Number of uppercase xters: "<<count_upper<<endl;//Number of uppercase xters: 3
	cout<<"Number of lowercase xters: "<<count_lower<<endl;//Number of lowercase xters: 15
	
	return a;
}
char* print_word(char a[]){
	for(int i=0;a[i] != '\0';i++){
		//Space is replaced with control xter '\n'
		
		if(isblank(a[i]))
			a[i]='\n';
	}
	return a;
}

int main()
{
	/*
	   cctype header contains functions to handle xters:
       xters are of 2 types:
          1. printable xters -> the xters that are displayed on terminal.
          2. control xters -> xters initiated to perform a specific operation.
       The args passed to xter functions should be of integer type, 
	   otherwise they are typecasted into integers(corresponding to ASCII values)
	    and those integers are passed as args.
	    
       This header has functions:
         1.isalnum() - identifies alphanumeric xters. Returns 0 if the passed arg
		              is non-alphanumeric xter, non-zero value if the passed arg is alphanumeric
         
         2.isalpha() - identifies alphabets from other xters, Returns 0 if the passed arg is not
                      an alphabet, non-zero value if the passed arg is an alphabet.
                      
         3.isblank() - identifies blank spaces from other xters, Returns 0 if the passed arg is not
                      an alphabet, non-zero value if the passed arg is an alphabet.

         4.isctrl() - identifies the control xters(\n,\b,\t,\r),Returns 0 if the passed arg is not
                      an ctrl xter, non-zero value if the passed arg is a ctrl xter.
          
         5.isdigit() - identifies numbers in xter.
         
         6.islower() - identifies lower case alphabets.
         
         7.isprint() - identifies the printable xters.
         
         8.ispunct() - identifies punctuation xters(xters that are neither alphanumeric nor space).
         
         9.isspace() - identifies white-space xters.
         
         10.isupper() - identifies uppercase alphabets.
         
         11.isxdigit() - identifies hexadecimal digit.
         
         12.tolower() - convert uppercase alphabet to lowercase.
         
         13.toupper() - convert lowercase alphabet to uppercase.
         
        
	
	*/
	
	//String initialization
	char a[] = "Hi 1234, Welcome to my House";
	char *p;
	char *q;
	


	
	identify_alpha_numeric(a);
	p = identify_convert_ul(a);
	
	cout<<p<<endl;//hI 1234, wELCOME TO MY hOUSE
	
	q = print_word(a);
	cout<<q<<endl;
	/*
	 hI
     1234,
     wELCOME
     TO
     MY
     hOUSE
	
	*/
	
	
	return 0;
}