#include <iostream>

using namespace std;

class Animal
{
private:
	
protected:
	
public:
	void animalSound(){
		cout<<"The animal makes a sound\n";
	}
	
};
class Pig: public Animal
{
private:
	
protected:
	
public:
	void animalSound(){
		cout<<"The pig says wee wee\n";
	}
	
	
};
class Dog: public Animal
{
private:
	
protected:
	
public:
	void animalSound(){
		cout<<"The dog says: bow bow\n";
	}
	
};

int main()
{
	Animal an;
	Dog dg;
	Pig pg;
	
	an.animalSound();
	dg.animalSound();
	pg.animalSound();
	
	return 0;
}

