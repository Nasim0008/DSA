#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<< "Inter the size: ";
    cin>>n;
    int arr[n];
    cout<< "Inter the value of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<< "Given array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    //Ascending sory

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<< "Sorted array in Descending order: ";
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}


