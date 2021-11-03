#include <iostream>
#include <vector>

using namespace std;
/*
   NOTE:
   //For references
     (int &name = bn)  ==  (int& name = bn)  == (int & name = bn)
     
   //For pointers
     (int *name)  ==  (int* name)  == (int * name)

*/



struct Student{
	string name;
	string address;
	int rollNo;
	
};
/*
  If we remove & in the function below, a new copy of the student object is created.
  We use const to avoid accidental updates in the function as the purpose of the function
  is to print only.

*/
void print(const Student &s){
	cout<<s.name<<" "<<s.address<<" "<<s.rollNo<<"\n";
}
void swap(int &first, int &second){
	int temp = first;
	first = second;
	second = temp;
}

int main(){
	/*
	  1. Modify the passed parameters in a function.
	     If a function receives a reference to a variable, it can modify the value 
         of the variable.
         
      2. Avoiding a copy of large structures eg. A function that has to receive a large object.
         If we pass it without reference, a new copy of it is created which causes wastage of CPU
         time and memory. References can be used to avoid this.
         
      3. In For Each loops to modify all objects
      4. In For Each loops to avoid copy of objects
         
    */
    int a=2,b=3;
    
   // vector<int> vect{10,20,30,40};
    
    Student s;
    s.name = "Peter";
    s.address = "Nyeri";
    s.rollNo = 123;
    
    swap(a,b);
    cout<<a<<" "<<b<<"\n";//3 2
    
    print(s);//Peter Nyeri 123
    
    /* 
    // We can modify elements if we use reference.
    
   for(int &x : vect){
		x = x + 5;
	}
	
	for(int x: vect){
		cout<<x<<"\n";
	}
	
	//We avoid copy of the whole string object by using reference
	vector<string> vect{"geeksforgeeks practice","geeks for geeks write","geeksforgeeks ide"};
	
	for(const auto &x:vect){
		cout<<x<<endl;
	}
	
	
	NOTE: A pointer can be declared as void but a reference can never be void.
	   ie. int a =10;
	   void* aa = &a;//Valid
	   void &ar = a;//Invalid
	   
    - Unlike pointers, once a reference is created it can't be later made to reference another object.
      This is done using pointers.
      
    - Also references can never be NULL. Pointers are often made NULL to indicate that they aren't
      pointing at any valid thing.
      
   - A reference must be initialized when declared. There is no such restriction with pointers.
	
	
	
	*/
    
    
	
	return 0;
}