#include <iostream>
using namespace std;

int sum(int a,int b=10,int c=20);
int main()
{
	//a=1,b=10(default), c=20(default)
	cout<<sum(1)<<endl;//31
	
	//a=1,b=2,c=20(default)
	cout<<sum(1,2)<<endl;//23
	
	//a=1,b=2,c=3
	cout<<sum(1,2,3)<<endl;//6
	
	return 0;
}
int sum(int a, int b, int c){
	int z;
	z = a+b+c;
	return z;
}


/*
  If you assign a default value to an arg, the subsequent args must also have a default
  value assigned to them, else u get a compilation error.
  
  ie. int sum(int a=10,int b,int c=20); INVALID, all args after int a should have default values
       
      int sum(int a,int b=34,int c); INVALID, int c should be initialized since the previous arg is.
      


*/