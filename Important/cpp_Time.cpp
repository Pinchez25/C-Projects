#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	/*
	  time.h header file describes 3 time related datatypes:
	  
	    1. clock_t: reps the date as an integer which is a part of the calendar time.
	    
	    2. time_t: reps the clock time as an integer which is a part of the calendar time.
	    
	    3. struct tm: holds the date and time whic contains:
	         
	         struct tm{
				 //seconds, range 0 to 59
				 int tm_sec;
				 
				 //minutes, range 0 to 59
				 int tm_min;
				 
				 //hours, range o to 23
				 int tm_hour;
				 
				 //day of the month, range 1 to 31
				 int tm_day;
				 
				 //Number of years since 1900
				 int tm_year;
				 
				 //day of the week, range 0 to 6
				 int tm_wday;
				 
				 //day in the year, range 0 to 365
				 int tm_yday;
				 
				 //daylight saving time
				 int tm_isdst
				 
			 }
	
        It also contains CLOCKS_PER_SEC macro which holds the number of time does the
        system clock tick per second.
        
        
        Predefined functions in the header:
        
            1. asctime(const struct tm *timeptr) -> returns the date and time in the format day month 
                  date hours:minutes:seconds year
                  eg. Sat Jul 27 11:26:03 2019. It returns a string by taking struct tm variable as param.
                  
            2. clock() -> returns the processor time consumed by a program. 
			
            3. ctime() -> It returns the date and time in the format day month hours:minutes:seconds year. 
			       time is printed base on the pointer returned by Calendar Time.
			       
            4. difftime() -> returns the difference btwn the times provided.
            
            5. gmtime() -> prints the UTC time and date. format for both gmtime() and asctime() is the same.
            
            6. mktime() -> return the calendar-time equivalent using struct tm.
            
            7. time() -> returns the calendar-time equivalent using data type time_t.
            
            8.strftime() -> helps to format the string returned by other time functions
                  using diff time specifiers.
                  
            9 localtime() - value of timer is broken up into the structure tm and expressed
                  in the local time zone.
      
	*/
	
	 struct tm* ptr;
	 time_t lt;
	 
	 lt = time(NULL);
	 ptr = localtime(&lt);
	 
	 cout<<asctime(ptr);//Sat Sep 19 15:10:11 2020
	 
	 //UTC time
	 ptr = gmtime(&lt);
	 
	 cout<<"\n"<<asctime(ptr);//Sat Sep 19 12:11:21 2020
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	
	return 0;
}