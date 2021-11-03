#include <iostream>
using namespace std;

int main()
{
	for(int num=0;num<=6;num++){
		
		//makes the loop skip the iteration at the specified point
		//in this case 3 is skipped
		if(num==3){
			continue;
		}
		cout<<num<<"\n";
	}
	cout<<"----------------------------------------------\n";
	cout<<"Print odd numbers using continue statement\n";
	cout<<"----------------------------------------------\n";
	
	for(int j=0;j<=10;j++){
		if(j%2==0){
			continue;
		}
		cout<<j<<"\n";
	}
	
	cout<<"----------------------------------------------\n";
	cout<<"Continue statement in while loop\n";
	cout<<"----------------------------------------------\n";
	int i=6;
	while(i>=0)
	{
		if(i==4){
			i--;
			continue;
		}
		cout<<"Value of i: "<<i<<endl;
		i--;
		
	}
	
	
	cout<<"----------------------------------------------\n";
	cout<<"Continue statement in do-while loop\n";
	cout<<"----------------------------------------------\n";
	
	int t = 4;
	do{
		if(t==7){
			t++;
			continue;
		}
		cout<<"t is: "<<t<<endl;
		t++;
	}while(t<10);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}