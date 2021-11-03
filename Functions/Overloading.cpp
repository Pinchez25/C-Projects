#include <iostream>
#include <cmath>
using namespace std;

/*
  This is where multiple functions have the same name but different parameters.
  Multiple functions can have the same name as long as the number and/or the
  type of parameters is different.
*/
int myFunction(int x){
	
	return pow(x,3);
	
}
double myFunction(double x, double y){
	return x * y;
}

int main(){
	

	cout<<myFunction(3)<<endl;//27
	cout<<myFunction(3.4,5.6)<<endl;//19.04
	
	
	return 0;
}
