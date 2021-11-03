#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t rawtime;
	struct tm* timeinfo;
	
	//used to store the time returned by localtime() function
	char buffer[80];
	
	
	time(&rawtime);
	
	timeinfo = localtime(&rawtime);
	
	strftime(buffer,80,"Time is %I:%M %p.",timeinfo);
	
	//prints the formatted time
	//puts(buffer);
	cout<<buffer;//Time is 03:42PM.
	
	
	return 0;
}