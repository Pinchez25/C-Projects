#include <iostream>
using namespace std;

//In this program, the pointer returns a reference of current object so that the calls
// can be chained, this way you can call all the functions for the current object at one go.
class Demo{
		private:
			int num;
			char ch;
        public:
        	Demo &setNum(int num){
				this->num = num;
				return *this;
				
			}
			Demo &setChar(char ch){
				this->num++;
				this->ch = ch;
				return *this;
			}
			void displayMyValues(){
				cout<<num<<endl;
				cout<<ch;
			}
		 
	};

int main()
{
	Demo obj;
	//Chaining calls
	obj.setNum(100).setChar('A');
	obj.displayMyValues();//101,A
	
	return 0;
}