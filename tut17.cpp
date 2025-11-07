#include<iostream>
using namespace std;

// int product(int a, int b){
//     return a*b;
// }


// int main(){
//     int a, b;
//     cout<<"Enter the value of A and B:"<<endl;
//     cin>>a>>b;
//     cout<<" The product of a and b is:"<<product(a,b)<<endl;
//     cout<<" The product of a and b is:"<<product(a,b)<<endl;
//     cout<<" The product of a and b is:"<<product(a,b)<<endl;
//     cout<<" The product of a and b is:"<<product(a,b)<<endl;
//     cout<<" The product of a and b is:"<<product(a,b)<<endl;
//     return 0;
// }

// inline int product(int a, int b){
//     return a*b;
// } 

// int main(){
//     int a, b;
//     cout<<"Enter the value of a and b"<<endl;
//     cin>>a>>b;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     return 0;
// }

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

int main(){
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 2.1)<< " Rs after 1 year";
    return 0;
}