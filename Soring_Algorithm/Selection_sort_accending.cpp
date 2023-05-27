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


    int min_ind;
    for(int i=0;i<n-1;i++)
    {
        min_ind = i;// store the ith index
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])// check ith element is smallest element or not
            {
                min_ind = j;//if not then update the min_ind with the smallest element index
            }
        }
        swap(arr[i],arr[min_ind]);// swap the corrent element with the minimum element
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}