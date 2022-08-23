#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cout<< "Inter the size of array: ";
    cin>>n;
    int arr[n];
    cout<< "Input the value of array: ";
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
    int value;
    cout<< "Please,Inter the value you want to search: ";
    cin>>value;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            cout<<i<<" th Index & "<<i+1<<" position"<<endl;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Not Found"<<endl;
    }


}
