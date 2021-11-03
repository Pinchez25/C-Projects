#include <iostream>

//Always remember to handle all the freeing related to the pointers in the
//exeption handling code.
   
   /*
      try{
		  call_function(base_ptr);
	  }
	  //Catch the custom exception pointer using our exeption class
	  catch(MyExeption* ex_obj){
		  delete ex_obj;
	  }
	  //catch a reference to an exception class object
	  catch(MyExeption& ex_obj){
		  //Do stuff...
	  }
   
   */

using namespace std;

class MyException{
    public:
	    int err;//Error code
	    
	    string err_msg;//String containing Error Message.
	    
	    //Base constructor
	    MyException(int val=0){
			err = val;
			switch(val){
				case(-1):
					err_msg = "Case -1";
					break;
				case(-2):
					err_msg = "Case -2";
					break;
				case(-3):
					err_msg = "Case -3";
					break;
				default:
					err_msg = "\0";//No error message for other cases.
			}
		}
		~MyException(){
			cout<<"Destructor for Exception class called\n";
		}
};
void function_call(int &x){
	//Do some work and modify the value of x, so we are passing by reference.
	
	if(x<=0){
		//Throw an exeption and pass on the object x.
		MyException* ex = new MyException(x);
		throw ex;//Throw the exeption pointer.
	}else
	{
		x = 100;
	}
}

int main()
{
	//Passing pointers and references to functions
	
	for(int i=0;i>=-3;i--){
		try{
			function_call(i);
			cout<<"If this line executes, then x!=0\n";
			
		}catch(MyException* ex){
				cout<<"Exeption thrown.Error Message: "<<ex->err_msg<<"\n";
			//Remember to free the pointer to the exeption.
			delete ex;
		}catch(...){
			cout<<"Default exception currently, i = "<<i<<" caught.\n";
		}
	}
	
	
	return 0;
}