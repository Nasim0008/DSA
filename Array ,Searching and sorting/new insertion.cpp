#include<bits/stdc++.h>
using namespace std;
void inputarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< " ";
    }
}
int main()
{
    int arr[50];
    cout<< "Enter the size of the array: ";
    int n;
    cin>>n;
    cout<< "Input the value of the array: ";
   inputarray(arr,n);
   int pos,value;
   cout<< "Enter the position: ";
   cin>>pos;
   cout<< "Enter the value that insert the position: ";
   cin>>value;

   arr[n]=arr[pos];//keep the position index value to the last index
   arr[pos]=value;//insert the value  in the position index
   cout<< "Inserted array: ";
   printarray(arr,n+1);
}
