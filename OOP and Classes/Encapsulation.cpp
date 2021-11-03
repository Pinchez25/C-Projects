#include <iostream>

using namespace std;
class Example{
		private:
			int num;
			char ch;
			
        public:
        	int getNum() const{
				return num;
			}
			char getCh() const{
				return ch;
			}
			void setNum(int num){
				this->num = num;
			}
			void setCh(char ch){
				this->ch = ch;
			}
	};

int main()
{
	/*
	   Encapsulation is the process of combining data members and functions in a single
	   unit called a class, to prevent access to data directly.
	   
	   To achieve encapsulation:
	      1. make all the data members private.
	      2. Create public getter and setter functions.
	
	*/
	Example ex;
	ex.setNum(100);
	ex.setCh('A');
	cout<<ex.getNum()<<endl;
	cout<<ex.getCh()<<endl;
	
	
	return 0;
}