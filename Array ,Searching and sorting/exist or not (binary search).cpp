#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int to_find;
    cin>>to_find;
    cout<< binary_search(v.begin(),v.end(),to_find)<<endl;// True and flase
    /*
     if (exist in the vector)
    {
        return true;
    }
    else
    {
        return false;
    }
    */
}


