#include <iostream>

using namespace std;

//template function
// A function template that display largest among 2 values.
//T signifies that arg can be of any datatype.
	template <typename T> 
	T Large(T n1, T n2){
		return (n1>n2)?n1:n2;
	}

int main(){
	/*
	    Templates in c++ allow you to create a single function or a class to work
	    with different data types/generic programming.
	    
	    Hence there are:
 	       1. Function templates - unlike the normal functions, function templates can work
 	                  with different data types at once.
 	                  - Normally to perform identical operations on two or more types of data
 	                    we overload a function to create 2 functions with the required func declaration.
 	                    
                      - The better approach will to use function templates coz u can perform the same task
                        writing less and maintainable code.
                      - Function template declaration:
                              
                              template <class T>
                              T someFunction(T arg){
								  ...........
							  }
							      OR
				              template <typename T>
                              T someFunction(T arg){
								  ...........
							  }
							  
                      - <> holds the template parameters. In the above code T is a template arg that
                        accepts diff data tyoes(int, float...), and class is a keyword.
                      - You can also use keyword typename instead of class.
 	                  
	       2. Class templates - useful when you wanna create a class implementation that is same for 
	                 all classes, only the datatypes used are different.
	                 
	                 Declaration:
	                     template <class T>
	                     class className{
							 ................
							 public:
							    T var;
							    T someOperation(T arg);
							    ...............
						 };
						 
              -  A class template object is created as follows:
                 
				      className<dataType> classObject;
	
	*/
	
	
	int i1,i2;
	float f1,f2;
	char c1,c2;
	
	cout<<"Enter two integers: \n";
	cin>>i1>>i2;
	cout<<Large(i1, i2)<<" is larger.\n";
	
	
    cout<<"Enter two floating point numbers: \n";
	cin>>f1>>f2;
	cout<<Large(f1, f2)<<" is larger.\n";
	
	
    cout<<"Enter two xters: \n";
	cin>>c1>>c2;
	cout<<Large(c1, c2)<<" has larger ASCII value.\n";
	
	
	
	
	
	return 0;
	
	
}