#include <iostream>
using namespace std;

// Its called called by value function
// void swappointer(int* x,int* y){
//     int temp;
//     temp= *x;
//     *x= *y;
//     *y = temp;
// }

// Its Called Called by refernce function
// void swapreference(int &x,int &y)
int &swapreference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return x;
}

int main()
{
    int a = 6, b = 3;
    cout << "The value of a = " << a << " and b = " << b << " before swaping ";
    // swappointer(&a ,&b);
    swapreference(a, b) = 890;
    cout << "\nThe value of a = " << a << " and b = " << b << " After swaping ";
    return 0;
}