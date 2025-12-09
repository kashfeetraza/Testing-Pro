#include<iostream>
using namespace std;

int main(){
    int number;
    
    cout<<"Enter the number: ";
    cin>>number;

    if(number%2==0){
        cout<<"The Number is Even."<<endl;
    }else{
        cout<<"The Number is Odd."<<endl;
    }
    return 0;
}
