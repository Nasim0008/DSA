#include<bits/stdc++.h>
using namespace std;

void inputarray(int a[],int s)
{
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
}
void printarray(int a[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<< " ";
    }
}
int main()
{
    int ar[50];
    int n;
    cin>>n;
    inputarray(ar,n);
    printarray(ar,n);

    int pos,value;
    cin>>pos>>value;
    ar[n]=ar[pos];
    ar[pos]=value;

    printarray(ar,n+1);
}
