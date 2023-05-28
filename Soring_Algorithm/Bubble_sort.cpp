#include <bits/stdc++.h>
using namespace std;
// bubble sort can sort the largerst element after every itaration
int main()
{
    int n;
    cin >> n;
    int arr[n + 4];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        bool flag = true;// if array is already sorted or not
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}