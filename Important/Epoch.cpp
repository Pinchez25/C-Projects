#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	
	/*
	  clock_t - stores processor time;
	  
	  time_t - stores calendar time.
	  
	  struct tm - structure used to hold the time and date.
	
	
	*/
	time_t seconds;
	struct tm* timer;
	char epoch[80];
	
	
	seconds = time(NULL);
	strftime(epoch,80,"Epoch %I:&M %p",timer);
	cout<<"Hours since epoch: "<<(seconds/3600)<<endl;//Hours since epoch: 444588
	
	return 0;
}