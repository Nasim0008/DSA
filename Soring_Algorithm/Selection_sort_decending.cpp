#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max_ind;
    for(int i=0;i<n-1;i++)
    {
        max_ind = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[max_ind])
            {
                max_ind = j;
            }
        }
        swap(arr[i],arr[max_ind]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}