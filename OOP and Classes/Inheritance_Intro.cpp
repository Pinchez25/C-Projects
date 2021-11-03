#include <iostream>

using namespace std;

class Animal{
	private:
		string color;
	
	protected:
		string type;
	
	public:
		void eat(){
			cout<<"I can eat!"<<endl;
		}
		void sleep(){
			cout<<"I can sleep!"<<endl;
		}
		void setColor(string clr){
			color = clr;
		}
		string getColor(){
			return color;
		}
	
};
class Dog: public Animal{
	
	public:
		void setType(string tp){
			type = tp;
		}
		void displayInfo(string c){
			cout<<"I am a "<<type<<endl;
			cout<<"My color is "<<c<<endl;
		}
		void bark(){
			cout<<"I can bark! Woof Woof!"<<endl;
		}
		
};

int main()
{
	/*
	   public members: are accessible from outside the class.
	   
	   protected members: are inaccessible outside the class but accessible to derived classes
	          and friend functions/classes.
	          
	          - They are used to hide data of a class, but still want it to be inherited.
	
	*/
	Dog dg;
	dg.eat();
	dg.sleep();
	dg.setColor("black");
	dg.bark();
	dg.setType("mammal");
	
	dg.displayInfo(dg.getColor());

	
	
	return 0;
}