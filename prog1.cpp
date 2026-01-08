#include<iostream>
#include<cmath>
using namespace std;

class Exponent{
    int x=9;
    int z= 2;
    public:
    Exponent(){
        cout<<"Exponent of the number is: "<<pow(x,z);
        cout<<endl;
    }

};

class Multiply{
    int a=5;
    int b=5;
    public:
    Multiply(){
        cout<<"Multiply of the Number is: "<<a*b;
        cout<<endl;
    }

};

class division{
    int a1=30;
    int b1=5;
    public:
    division(){
        cout<<"The Division of the number is: "<<a1/b1;
        cout<<endl;
    }
};

class Addition{
    int x=90;
    int y=80;
    public:
    Addition(){
        cout<<"The Addition of these number is: "<<x+y;
        cout<<endl;
    }

};

class Substraction{
    int i=100;
    int o=50;
    public:
    Substraction(){
        cout<<"The Substraction of these number is : "<<i-o;
        cout<<endl;
    }

};

int main(){
    Exponent e;
    division d;
    Multiply m;
    Addition add;
    Substraction sub;
    
    return 0;
}
