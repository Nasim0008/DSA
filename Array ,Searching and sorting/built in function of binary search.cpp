#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int value;
    cin>>value;
    bool flag = binary_search(arr,arr+n,value);
    if(flag)
    {
        cout<< "Found"<<endl;
    }
    else
    {
        cout<< "Not Found"<<endl;
    }



}




