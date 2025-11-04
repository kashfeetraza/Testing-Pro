#include<iostream>
using namespace std;
int main(){
	string user="cash";
	string pin="1234";
	string username;
	string password;
	string month="March";
	int day;
	int attempts;
	int fast;
	string ramadan[32] = {"Ramadan  |   DATE  |  SEHAR 	| IFTAR",
"1st   |   Mar 02 |	05:07 AM  |	06:04 PM",
"2nd       Mar 03 	05:06 AM	06:05 PM",
"3rd       Mar 04 	05:05 AM	06:05 PM",
"4th       Mar 05 	05:03 AM	06:06 PM",
"5th       Mar 06 	05:02 AM	06:07 PM",
"6th       Mar 07 	05:01 AM	06:08 PM",
"7th       Mar 08 	05:00 AM	06:08 PM",
"8th       Mar 09	04:59 AM	06:09 PM",
"9th       Mar 10 	04:57 AM	06:10 PM",
"10th      Mar 11        04:56 AM  	06:10 PM",
"11th      Mar 12 	04:55 AM	06:11 PM",
"12th      Mar 13 	04:54 AM	06:12 PM",
"13th      Mar 14 	04:52 AM	06:13 PM",
"14th      Mar 15 	04:51 AM	06:13 PM",
"15th      Mar 16 	04:50 AM	06:14 PM",
"16th      Mar 17	04:48 AM	06:15 PM",
"17th      Mar 18	04:47 AM	06:15 PM",
"18th      Mar 19	04:46 AM	06:16 PM",
"19th      Mar 20 	04:44 AM	06:17 PM",
"20th      Mar 21 	04:43 AM	06:17 PM",
"21st      Mar 22 	04:42 AM	06:18 PM",
"22nd      Mar 23 	04:40 AM	06:19 PM",
"23rd      Mar 24 	04:39 AM	06:19 PM",
"24th      Mar 25 	04:38 AM	06:20 PM",
"25th      Mar 26 	04:36 AM	06:21 PM",
"26th      Mar 27 	04:35 AM	06:21 PM",
"27th      Mar 28 	04:34 AM	06:22 PM",
"28th      Mar 29 	04:32 AM	06:23 PM",
"29th      Mar 30        04:31 AM  	06:22 PM",
"30th      Mar 31        04:29 AM  	06:22 PM"  };

string paras[31] = {
        "1st first half Para", "1st second half para", "2nd para", "3rd para", "4th para", "5th para", 
        "6th para", "7th para", "8th para", "9th para", "10th para", 
        "11th para", "12th para", "13th para", "14th para", "15th para", 
        "16th para", "17th para", "18th para", "19th para", "20th para", 
        "21st para", "22nd para", "23rd para", "24th para", "25th para", 
        "26th para", "27th para", "28th para", "29th para", "30th para"
    };
    
    
    	cout<<"======================================================="<<endl;
    cout<<"\tEnter the username:";
    while(attempts<3){
	cin>>username;
	cout<<"======================================================="<<endl;	
	cout<<"\tEnter the password:";
    cin>>password;
    
    if(username==user && password==pin){
	
    
    
    
	cout<<"======================================================="<<endl;
	cout<<"\tThe Month of Ramzan is:"<<month<<endl;
	cout<<"======================================================="<<endl;
	cout<<"\tEnter The Day:";
	cin>>day;
	
    if(day>=2 && day<=31){
	cout<<"======================================================="<<endl;
	    cout<<"\tRamazan Mubarik "<<endl; 
	cout<<"======================================================="<<endl;
        fast=day-1;
        cout<<"\tThe current fast is:"<<fast<<endl;
	cout<<"======================================================="<<endl;
        day=day-1;
        cout<<ramadan[0]<<endl;
     	cout<<ramadan[day]<<endl;
	cout<<"======================================================="<<endl;
	    cout<<"\tThe Next day of fast Sehr and Iftar is"<<endl;
	cout<<"======================================================="<<endl;
        day=day+1;
        cout<<ramadan[0]<<endl;
        cout<<ramadan[day]<<endl;
	cout<<"======================================================="<<endl;
	    cout<<"Holy Quran Talawat for Today"<<endl;
	    cout<<"======================================================="<<endl;
	    day=day-2;
	    cout<<paras[day]<<endl;
        cout<<"======================================================="<<endl;
    } else if (day<1 ||day>31){
		cout<<"\tPlease Check your selected month and date there is a mistake\n";
		return 0;
	}
   }	else { cout << "======================================================="<<"\n\tIncorrect username or password\n"<<"\n=======================================================" << endl<<"\t"<<2 - attempts << " Attempts Remaining\n" ;
	attempts++; 
	if (attempts < 3){  cout<<"======================================================="<<endl;
	cout << "\tEnter your Username:";
	 }
	}
	 } if (attempts == 3){ cout <<"======================================================="<< "\nYou have exceeded the attempts limit\n ACCESS BLOCKED!";
	 }
	return 0;
    }
