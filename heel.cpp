#include <iostream>
using namespace std;

int main()
{
    int arr[10], brr[10], n, k = 0, i, j;
    cout << "Enter The number of arry";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (arr[i] == brr[j])
            {
                break;
            }
            else if (j == k)
            {
                brr[k] == arr[i];
                k++;
            }
        }
    }
    cout << "Repeated element after deletion :";
    for (i = 0; i < k; i++)
    {
        cout << brr[i] << " ";
    }

    return 0;
}
