#include<iostream>
using namespace std;

void linearSearch(int a[], int n){
    int temp = -1;

    for (int i = 0; i < 5; i++)
    {
        if (a[i]==n)
        {
            cout << "Your Search is :" << i << endl;
            temp = 0;
        }
        
    }
    
    if (temp==-1)
    {
        cout << "No Element Found" << endl;
        
    }
    
}

int main(){
    
    int arr[5] = {23,4,52,6,2};
    int num;

    cout << "Please Enter an Element to Search:" << endl;
    cin>>num;

    linearSearch(arr,num);

    return 0;
}