#include<iostream>
using namespace std;
#define Fixed_age 18
int main()
{
	int age;
	char hasliscence;
	
	cout<<"Enter your age:";
	cin>>age;
	
	if(age>=Fixed_age){
	
		cout<<"Do you have licence? (Y/N)|\n";
		cin>>hasliscence;
	
		if(hasliscence=='Y'||hasliscence=='y'){
	
			cout<<"\n you are eligible to drive";
	
		}else if(hasliscence=='N'||hasliscence=='n'){
	
			cout<<"\n you are not eligible to drive";
		
		}
		else{"\nyou have no liscense go and make it";
		}
	}else{
		cout<< "\n you are not eligible to drive as you are under age";
	}
	return 0;
}
