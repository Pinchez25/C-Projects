#include <iostream>


using namespace std;

/*
  A limited number of arithmetic operations can be performed on pointers. Pointer may be:
     1. incremented(++)
     2. decremented(--)
     3. an integer may be added to a pointer(+ or +=)
     4. an integer may be subtracted from a pointer(- or -=)
     
 Pointer arithmetic is meaningless unless performed on an array.
 NB: Pointers contain addresses.Adding 2 addresses makes no sense coz there is no idea where it'd point to.
     Subtracting 2 addresses lets u compute the offset b2in these 2 addresses.

*/

int main(){
	//Declare an array
	int v[3] = {10,100,200};
	
	//Declare a pointer variable
	int *ptr;
	
	//Assign the address of v[0] to ptr
	ptr = v;// same as 'ptr = &v[0];' since the array_name acts like a pointer to the value at index 0.
	
	
	for(int i=0;i<3;i++){
		cout<<"Value of *ptr = "<<*ptr<<endl;
		cout<<"Value of ptr = "<<ptr<<"\n\n";
		
		//increment ptr by 1
		ptr++;
	}
	/*
	   Value of *ptr = 10
       Value of ptr = 0x67fedc

       Value of *ptr = 100
       Value of ptr = 0x67fee0

       Value of *ptr = 200
       Value of ptr = 0x67fee4
	
	*/
	
	return 0;
}