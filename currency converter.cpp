#include <iostream>
using namespace std;
int main(){


	string username = "AKM";
	string password="8900";
	string user;
	string Pass;
	float Dollar;
	float PKR;
	float pound;
	float riyal;
	float choice;
	float result1,result2,result3,result4,result5,result6;
	
	cout<<"---------------------------------------------------------"<<endl;
	
	cout<<"\tEnter Username:";
	while(true){
	cin>>user;
	
	cout<<"\tEnter Your Password:";
	cin>>Pass;
	
	if(user==username && Pass==password){
	cout<<"---------------------------------------------------------"<<endl;
	
		cout<<"\tWelcome to AKM Currency Converter"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
    
	cout<<"\tPress 1 for covert PKR to Dollar:\n\tPress 2 for covert Dollar to PKR:\n\tPress 3 for covert PKR to Pound:\n\tPress 4 for covert Pound to PKR:\n\tPress 5 for covert PKR to Riyal:\n\tPress 6 for covert Riyal to PKR:\n--------------------------------------------------------- "<<endl;
	cin>>choice;
		cout<<"---------------------------------------------------------"<<endl;

    if(choice==1){
    	cout<<"\tCurrent Rate Of Dollar is 279.75"<<endl;
    	cout<<"---------------------------------------------------------"<<endl;
    	cout<<"Enter Your PKR amount:";
    	cin>>PKR;
    	result1=PKR/279.75;
    	cout<<"---------------------------------------------------------"<<endl;
    	cout<<"The conversion of "<<PKR<<"PKR is "<<result1<<"$"<<endl;
    	break;
	}
	else if(choice==2){
	    cout<<"\tCurrent Rate Of Dollar is 279.75"<<endl;
    	cout<<"---------------------------------------------------------"<<endl;
		cout<<"Enter Your Dollar amount:";
		cin>>Dollar;
		result2=Dollar*279.75;
		cout<<"---------------------------------------------------------"<<endl;
		cout<<"The conversion of "<<Dollar<<"$ is "<<result2<<"PKR"<<endl;
		break;	
	}else if(choice==3){
		cout<<"\tCurrent Rate Of Pound is 351.90"<<endl;
    	cout<<"---------------------------------------------------------"<<endl;
		cout<<"Enter your PKR amount:";
		cin>>PKR;
    	result3=PKR/351.90;
    	cout<<"---------------------------------------------------------"<<endl;
    	cout<<"The conversion of "<<PKR<<"PKR is "<<result3<<"€"<<endl;	
    	break;
	}else if(choice==4){
		cout<<"\tCurrent Rate Of Pound is 351.90"<<endl;
    	cout<<"---------------------------------------------------------"<<endl;
		cout<<"Enter your Pound Amount:";
		cin>>pound;
    	result4=pound*351.90;
    	cout<<"---------------------------------------------------------"<<endl;
    	cout<<"The conversion of "<<pound<<"€ is "<<result4<<"PKR"<<endl;
    	break;
	}else if(choice==5){
		cout<<"\tCurrent Rate Of Riyal is 74.59"<<endl;
    	cout<<"---------------------------------------------------------"<<endl;
		cout<<"Enter your PKR Amount:";
		cin>>PKR;
    	result5=PKR/74.59;
    	cout<<"---------------------------------------------------------"<<endl;
    	cout<<"The conversion of "<<PKR<<"PKR is "<<result5<<"Riyal"<<endl;
    	break;
	}else if(choice==6){
		cout<<"\tCurrent Rate Of Riyal is 74.59"<<endl;
    	cout<<"---------------------------------------------------------"<<endl;
		cout<<"Enter your riyal Amount:";
		cin>>riyal;
    	result6=riyal*74.59;
    	cout<<"---------------------------------------------------------"<<endl;
    	cout<<"The conversion of"<<riyal<<"Riyal is "<<result6<<"PKR"<<endl;
    	break;
	}else{
		cout<<"---------------------------------------------------------"<<endl;
		cout<<"Please Contact with Team AKM for Adding more currency in this Program"<<endl;
		cout<<"---------------------------------------------------------"<<endl;
	}
     }else {
     	cout<<"---------------------------------------------------------"<<endl;
     	cout<<"Invalid Password or Username\n try again:\n Enter the username:\n";
     	
	 }
}
    
	cout<<"---------------------------------------------------------"<<endl;
	return 0;
}
