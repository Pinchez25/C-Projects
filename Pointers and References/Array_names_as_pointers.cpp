#include <iostream>

using namespace std;

/*
   An array name acts like a pointer constant. The value of this pointer'
   is the address of the 1st element.
   
   eg. If we have an array val then val and &val[0] van be used interchangeably.


*/

int main(){
	
	//Declare an array
	int val[3] = {5,10,15};
	
	//Declare a pointer variable
	int *ptr;
	
	//Assign the address of val[0] to the pointer
	ptr = val; //same as ptr = &val[0];
	cout<<"Elements of the array are: ";
	cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<"\n";//Elements of the array are: 5 10 15
	
	
	//For multi-dimensional arrays, generally nums[i][j] is equivalent to (*(nums+i)+j)
	
	/*
	     Example:
	       int nums[2][3] = {{16,18,20},{25,26,27}};
	       
	       *(*nums) = nums[0][0] = 16;
	       *(*nums+1) = nums[0][1] = 18;
	       *(*nums+2) = nums[0][2] = 20;
	       *(*(nums+1)) = nums[1][0] = 25;
	       *(*(nums+1)+1) = nums[1][1] = 26;
	       *(*(nums+1)+2) = nums[1][2] = 27;
	       
	       
	       
	       
	       
	       
	       
	       
	       
	       
	       
	       
	       
	       
	       
	       
	
	
	*/
	
	
	return 0;
}