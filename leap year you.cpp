#include<iostream>
using namespace std;
int main()
{
	int year;
	
	cout<<"Enter Year: ";
	cin>>year;
	
	   if(year%400==0 || year%100!=0 && year%4==0){
	   	
	   cout<<"leap year";
	   
	   }else{
	   	
	   	cout<<"non leap year";
	   }
	   return 0;
}

