#include <iostream>

using namespace std;

//A simple calculator using a class template
template <class T>
class Calculator{
private:
	T num1, num2;
	
protected:
	
public:
	Calculator(T n1, T n2){
		num1 = n1;
		num2 = n2;
	}
	void displayResult(){
		cout<<"Numbers are: "<<num1<<" and "<<num2<<"\n";
		cout<<"Addition is: "<<add()<<"\n";
		cout<<"Subraction is: "<<subtract()<<"\n";
		cout<<"Product is: "<<multiply()<<"\n";
		cout<<"Division is: "<<divide()<<"\n";
	}
	T add(){
		return num1 + num2;
	}
	T subtract(){
		return num1 - num2;
	}
	T multiply(){
		return num1 * num2;
	}
	T divide(){
		return num1 / num2;
	}
	
};


int main()
{
	Calculator<int> intCal(2,1);
	Calculator<float> floatCal(2.4,1.2);
	
	cout<<"Integer calculator results.."<<"\n";
	intCal.displayResult();
	
	cout<<"\n======================================\n\n";
	cout<<"Float calculator results.."<<"\n";
	floatCal.displayResult();
	
	return 0;
}