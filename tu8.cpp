#include <iostream>
using namespace std;
 int swap(int a , int b){
    cout <<" before swaping ";
    cout << "a="<< a<< "b="<<b;
    int temp = a;
    a = b;
    b = temp;
    cout <<"after swap";
    cout <<"a="<<a<<"b="<<b;
    

 

} 
int main(){
    int a=5;
    int b=6;
    swap(a,b);
    return 0;
}