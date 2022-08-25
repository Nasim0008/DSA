#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<< "Inter the size : ";
    cin>>n;
    int a[n],pre[n];
    cout<< "Enter the value of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    cout<< "Prefix sum array: ";
    for(int i=0;i<n;i++)
    {
        cout<<pre[i]<< " ";
    }
}
