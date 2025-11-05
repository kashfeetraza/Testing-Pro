#include<iostream>
using namespace std;

int converter(float n){
    return (n-32.0)*5.0/9.0;
}
int main(){
    float a;
    cout<<"Enter the number of Fahrenheit that you want to convert into Celsius Scale"<<endl;
    cin>>a;
    cout<<"The value of Celsius is "<<converter(a);    

    return 0;
}