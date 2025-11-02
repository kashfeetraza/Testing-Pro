#include<iostream> 
const int user_pin=2222;
using namespace std;

int main()
{
	
	int pin;
	int balance=50000;
	int withdrawal;
	
	cout<<"Enter your Pin:";
	cin>>pin;
	
	if(pin==user_pin){
		cout<<"you are successfully login"<<endl;
		cout<<"your current balence:"<<balance<<endl;
		cout<<"Enter your withdrawl amount:"<<endl;
		cin>>withdrawal;
		
		if(withdrawal<=balance){
		
		 balance=balance-withdrawal;
		 cout<<"you are successfully withdrawl the amount:"<<withdrawal<<endl;
		 cout<<"Your new balence:"<<balance;
		 }else
		     cout<<"your balance is less try again"<<endl;
		
	}else
	    cout<<"Inncorrect pin"<<endl;
	    
	    return 0;
	
	
}
