#include<bits/stdc++.h>
using namespace std;
void inputarray(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
}
void printarray(int arr[],int s)
{
    for(int i=0;i<s;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int a[50];
    int n;
    cin>>n;
    inputarray(a,n);
    printarray(a,n);

}
