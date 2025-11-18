#include<iostream>
using namespace std;

int main(){
    string Tea_name;
    float Tea_Price;
    int Tea_Quality;
    float Total_Price;
    float Dis_Price;

    cout<<"Enter The Tea Name:"<< endl;
    getline(cin,Tea_name);

    cout<<"Enter the price of Tea"<< endl;
    cin>>Tea_Price;

    cout<<"Enter the Quanity of Tea cup:"<<endl;
    cin>>Tea_Quality;

    Total_Price = Tea_Price * Tea_Quality;

    cout<<"The Total Bill:"<<Total_Price<<endl;

    if (Total_Price >= 100)
    {
        cout<<" Discount Apply:"<<endl;
        Dis_Price = Total_Price * 0.05;
        cout<<"Now Your Bill is:"<<Total_Price-Dis_Price <<endl;
    }else{
        cout<<"Sorry Your have not avail our discount"<<endl;
    }
    
    return 0;
}
