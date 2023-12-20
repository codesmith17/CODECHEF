#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,n1=0,nm1=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
           cin>>arr[j];
          if(arr[j]==1)
          n1++;
          if(arr[j]==-1)
          nm1++;

        }
        if(n%2!=0)
        cout<<"-1"<<endl;
        else
        {
            if(nm1>=n1)
            {
                cout<<nm1-n/2<<endl;
            }
            if(n1>nm1)
            {
                cout<<n1-n/2<<endl;
            }
        }
    }

    return 0;
}