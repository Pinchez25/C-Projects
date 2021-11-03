#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int frequency_of_primes(int n){
	//This function checks the number of primes less than the given parameter
	int i,j;
	
	int freq = n-1;
	
	for(i=2;i<=n;i++){
		for(j=sqrt(i);j>1;--j){
			if(i%j==0){
				--freq;
				break;
			}
		}
	}
	return freq;
}

int main()
{
	//program to find the clock ticks
	clock_t t;
	int f;
	t = clock();
	f = frequency_of_primes(9999);
	
	cout<<"The number of primes lower than 10000 is: "<<f<<"\n";
	
	t = clock()-t;
	
	
	cout<<"The number of clicks "<<t<< " ("<<((float)t)/CLOCKS_PER_SEC<<" seconds)\n";
	
	
	
	
	return 0;
}