#include<bits/stdc++.h>
using namespace std;

void inputarray(int a[],int sz)
{
    for(int i=0;i<sz;i++)
    {
        cin>>a[i];
    }
}
void printarray(int a[],int sz)
{
    for(int i=0;i<sz;i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int ar[50];
    int n;
    cout<< "Input the size of array: ";
    cin>>n;
    cout<< "Input the array: ";
    inputarray(ar,n);
    cout<< "Print the array: ";
    printarray(ar,n);

    int pos,value;
    cout<< "Inter the position: ";
    cin>>pos;
    cout<< "Inter the value of that position: ";
    cin>>value;
    for(int i=n-1;i>=pos;i--)
    {
        ar[i+1]=ar[i];
    }
    ar[pos]=value;
    cout<< "Print the insertion array: ";
    printarray(ar,n+1);

    return 0;


}
