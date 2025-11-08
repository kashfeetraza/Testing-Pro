#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
// The following way is called Recursions
int factorial(int a){
    if(a<=1){
    return 1;
    }
    return a*factorial(a-1);

}

int main(){
    int k;
    cout<<"Enter the number:";
    cin>>k;

    cout<<"\nThe value of factorial "<<k<<" is "<<factorial(k);
    cout<<"\nThe value of  fibonacchi "<<k<<" is "<<fib(k);
    
    return 0;
}