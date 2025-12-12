#include<iostream>
using namespace std;

int main(){
    int arr[5]={53,49,3,80,10};
    int temp;


    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;


    if(arr[0]<arr[1]){
        cout << arr[0] << " " << arr[1] << " ";
    }else{
        temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;

        cout << arr[0] << " " << arr[1] << " ";
    }
    return 0;
}