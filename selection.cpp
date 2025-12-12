#include<iostream>
using namespace std;

void selectionsort(int a[]){
    for (int i = 0; i < 5; i++)
    {
        int min = i;

        for (int j = i+1; j < 5; j++)
        {
            if (a[j]<a[min])
            {
                min = j;
            }
        }
        if(min!=i){
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}


int main(){
    // int arr[12]={30,70,50,60,52,70,90,9,25,80,8,100};

    int arr[5];

    cout << "Enter the Values:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    selectionsort(arr);

    cout << "After Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}