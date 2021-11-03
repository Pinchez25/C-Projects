#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	/*
	  It reads the next xter from the given input stream. It takes a file stream as its argument
	  and returns the next xter from the given stream as integer type.
	  
	  It takes a file stream to read the xter.
	  On success, it returns the read xter.
	  
	  On failure it returns EOF. If the failure is caused due to end of file, it sets the eof indicator.
	  If caused by other errors, it sets the error indicator.
	
	*/
	    int c;
	    FILE *fp;
	    
	    fp = fopen("fileame3.txt","r");
	    
	    if(fp){
			while(feof(fp)==0){
				c == getc(fp);
				putchar(c);
			}
		}else{
			perror("File opening failed");
		}
	  
	    fclose(fp);
	    
	
	return 0;
}