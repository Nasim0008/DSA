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
   int to_find;
   cin>>to_find;
   int lo=0,hi=n-1;
   int mid ;
   while(hi-lo>0)
   {
       mid = (lo+hi)/2;
       if(arr[mid]<to_find)
       {
           lo = mid+1;
       }
       else
       {
           hi=mid;
       }
   }
   if(arr[lo]==to_find)
   {
       cout<<lo<<endl;
   }
   else if(arr[hi]==to_find)
   {
       cout<<hi<<endl;
   }
   else
   {
       cout<< "Not Found"<<endl;
   }
}
