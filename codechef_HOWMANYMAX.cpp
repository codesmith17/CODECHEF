#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        int count=0;
        cin>>n;
        char arr[n-1];
        for(int j=0;j<n-1;j++)
        {
            cin>>arr[j];
        }
        for( int k=0;k<n-2;k++)
        {
            if(arr[k]!=arr[k+1] && arr[k]=='1')
            {
                count++;

            }
        }
        cout<<count+1<<endl;
    }

    return 0;
}