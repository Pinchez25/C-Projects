#include <iostream>

using namespace std;

class Hospital{
private:
	
protected:
	string name;
	string level;
	
public:
	string getName(){
		return this->name;
		}
    void setName(string name){
		this->name = name;
	}
	string getLevel(){
		return this->level;
	}
	void setLevel(string level){
		this->level = level;
	}		
		
	Hospital(string name, string level){
		this->name = name;
		this->level = level;
	}
	void printDetails(){
		cout<<this->name<<" is a "<<this->level<<" hospital."<<endl;
	}
	~Hospital(){
		cout<<"\n==================================================\n"<<endl;
		cout<<"This hospital system was Developed by @Pinchez"<<endl;
		cout<<"Thanks for your support"<<endl;
		cout<<"\n==================================================\n"<<endl;
	}
};
class Doctor: public Hospital{
private:
	
protected:
	string nameOfDoctor;
	int rollNo;
	string speciality;
	
public:
	Doctor(string,string,string,int,string);
	void Details();
	
};
Doctor::Doctor(string name,string level,string nameOfDoctor,int rollNo,string speciality):Hospital(name,level){
	this->nameOfDoctor = nameOfDoctor;
	this->rollNo = rollNo;
	this->speciality = speciality;
}
void Doctor::Details(){
	cout<<"Name: "<<this->nameOfDoctor<<endl;
	cout<<"Roll NO: "<<this->rollNo<<endl;
	cout<<"Hospital: "<<this->getName()<<endl;
	cout<<"Level: "<<this->getLevel()<<endl;
	cout<<"Speciality: "<<this->speciality<<endl;
	
}

int main()
{
	Doctor h("KNH","Level 5","Dr. Hopkins",1234,"Surgeon");
	h.Details();
	
	return 0;
}