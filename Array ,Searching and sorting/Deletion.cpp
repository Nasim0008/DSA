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
    cout<<endl;
}
int main()
{
    int ar[50];
    int n;
    cout<< "Inter the size of array: ";
    cin>>n;
    cout<< "Input the value of array : ";
    inputarray(ar,n);
    cout<< "Given array: ";
    printarray(ar,n);
    int pos;
    cout<< "Inter the deletion position: ";
    cin>>pos;

    if(pos==n) n--;
    else
    {
        for(int i=pos+1;i<n;i++)
        {
            ar[i-1]=ar[i];
        }
        n--;
    }
    cout<< "Deletion array: ";
    printarray(ar,n);




}
