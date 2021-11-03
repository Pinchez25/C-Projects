#include <iostream>
using namespace std;
class Demo{
		private:
			int num;
			char ch;
        public:
        	void setMyValues(int num, char ch){
				this->num=num;
				this->ch = ch;
			}
			void displayMyValues(){
				cout<<num<<endl;
				cout<<ch;
			}
		 
	};

int main()
{
	/*
	   The this pointer holds the address of the current object
	   ie. points to the current object of the class.
	   
	
	*/
	Demo obj;
	obj.setMyValues(100,'A');
	obj.displayMyValues();//100, A
	
	
	return 0;
}