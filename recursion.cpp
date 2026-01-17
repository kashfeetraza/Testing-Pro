#include<iostream>
using namespace std;

void fun(int x, int y){
    if (x>y)
    {
        cout << "x is bigger then y";
    }else{
        x=x+5;
        // cout << "y is bigger then x";
        fun(x,y);
    }
    
}

int main(){

    fun(20,30);
    return 0;
}