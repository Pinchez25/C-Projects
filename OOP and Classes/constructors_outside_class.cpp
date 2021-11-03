#include <iostream>
using namespace std;

class Car
{
private:
	
protected:
	
public:
	string brand;
    string model;
    int year;
    
    Car(string x, string y, int z);
	
};
Car::Car(string x, string y, int z){
	brand = x;
    model = y;
    year = z;
}

int main(){
	
	 Car obj("BMW","X5",1999);
    
    Car obj2("Ford","Mustang",1969);
    
    cout<<"------------ "<<obj.brand<<" Details ----------------"<<endl;
    cout<<"Car: "<<obj.brand<<endl;
    cout<<"Model: "<<obj.model<<endl;
    cout<<"Year: "<<obj.year<<endl;
    
    cout<<"------------ "<<obj2.brand<<" Details ----------------"<<endl;
    cout<<"Car: "<<obj2.brand<<endl;
    cout<<"Model: "<<obj2.model<<endl;
    cout<<"Year: "<<obj2.year<<endl;

	return 0;
	
}