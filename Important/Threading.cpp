#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <cgicc>

using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid){
	long tid;
	tid = (long)threadid;
	cout<<"Hello World! Thread ID, "<<tid<<endl;
	pthread_exit(NULL);
}

int main()
{
	pthread_t threads[NUM_THREADS];
	int rc;
	int i;
	/*
	  There are 2 types of multitasking:
	    1. process-based: handles concurrent execution of programs.
	    
	    2. Thread-based: deals with the concurrent execution of pieces of the 
	          same program.
	          
     C++ does not contain built-in support for multithreaded applications.
     Instead it relies entirely upon the os to provide this feature.
	
	*/
	for(i=0;i<NUM_THREADS;i++){
		cout<<"main(): creating thread, "<<i<<endl;
		
		rc = pthread_create(&threads[i],NULL,PrintHello,(void *)i);
		
		if(rc){
			cout<<"Error, Unable to create thread,"<<rc<<endl;
			exit(-1);
		}
	
	}
	pthread_exit(NULL);
	
	//return 0;
}