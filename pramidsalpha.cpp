#include<iostream>
using namespace std;

int main(){
    int n = 9;


    char ch = 'A';


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i+1 ; j++)
        {
            cout << ch;
        }
        // ch = ch + 1;
        
        for (int j = i; j > 0; j--)
        {
            cout << ch;
        }

        
        ch = ch + 1;

        cout << endl;
    
    }
    
    return 0;
}