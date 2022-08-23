#include<bits/stdc++.h>
using namespace std;

int binarysearch (int a[],int value,int lb,int ub)
{
    if(lb<=ub)
    {
        //calculate mid
        int mid = (lb+ub)/2;
        //value == a[Mid] centre
        if(value == a[mid])
        {
            return mid;
        }

        //value < a[Mid] left side
        else if(value < a[mid])
        {
            binarysearch(a,value,lb,mid-1);
        }

        //value > a[Mid] right side
        else if(value > a[mid])
        {
            binarysearch(a,value,mid+1,ub);
        }
    }
    else
    {
        return -1;
    }
}



int main()
{
    int n;
    cout<< "Inter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Input the value of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Given array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    int checkvalue;
    cout<< "Please,Inter the value you want to search: ";
    cin>>checkvalue;

    int index_number = binarysearch(arr,checkvalue,0,n-1);

    if(index_number != -1)
    {
        cout<< "Index Number: "<<index_number<<" and position number: "<<index_number+1<<endl;
    }
    else
    {
        cout<< "Not Found"<<endl;
    }



}
