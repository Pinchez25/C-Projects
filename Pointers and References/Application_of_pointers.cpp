#include <iostream>
#include <cmath>
using namespace std;

void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void fun(int n, int* square,double* sq_root){
	*square = n * n;
	*sq_root = sqrt(n);
}
//dynamically allocates an array of the given size.
int* createArr(int n){
	return new int[n];
}
int main(){
	
	//1. To pass arguments by reference which serves 2 purposes:
	//         i. To modify a variable of a function in other eg. swap 2 variables.
	//         ii. For efficiency purpose eg. passing a large structure without reference would
	//               create a copy of the structure, hence wastage of space.
	
	//    NOTE: The above 2 can be achieved thro' referencing in c/c++
	
	//2. For accessing array elements.
	
	//3. To return multiple values eg. square and squareroot of numbers.
	
	//4. Dynamic memory allocation
	//5. To implement data strucures eg. linked list, tree etc.
	//6. To do system level programming where memory addresses are important.
	
	
	int x = 10,y = 20;
	int arr[] = {100,200,300,400};
	int n = 100;
	int *sq = new int;
	double* sq_root = new double;
	
	
	
	
	swap(&x,&y);
	cout<<x<<" "<<y<<endl;//20 10
	
	//the compiler converts below to *(arr+2)
	cout<<arr[2]<<" ";
	cout<<*(arr+2)<<" \n";//300 300
	
	
	fun(n,sq,sq_root);
	cout<<*sq<<" "<<*sq_root;//10000 10
	
	
	
	int* pt = createArr(10);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}