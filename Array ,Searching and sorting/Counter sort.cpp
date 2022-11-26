#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[50],mx=INT_MIN;
   int n;
   cin>>n;

   // step 1: Finding max
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       mx=max(mx,arr[i]);
   }
   // Step 2: Frequency count
   int cnt[mx+1]={0};
   for(int i=0;i<n;i++)
   {
       cnt[arr[i]]++;
   }
   // Step 3: Cumulative sum
   for(int i=1;i<=mx;i++)
   {
       cnt[i]+=cnt[i-1];
   }
  // Step 4: Backward Traversal of Basic Array
  int sort_array[n];
  for(int i=n-1;i>=0;i--)
  {
      cnt[arr[i]]--;
       int k = cnt[arr[i]];
      sort_array[k]=arr[i];
  }
  for(auto u:sort_array)
  {
      cout<<u<< " ";
  }
  cout<<endl;

}

