#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char ch[n];
        if(n%2==0)
        {
            ch[0]='1';
            ch[n-1]='1';
        for(int j=1;j<n-1;j=j+1)
        {
            ch[j]='0';
        }
       
        for(int j=0;j<n;j++)
        cout<<ch[j];;
        }
        cout<<endl;
       
        if(n%2!=0)
        {
            for(int j=0;j<n;j=j+2)
            ch[j]='0';
            for(int j=1;j<n;j=j+2)
            ch[j]='1';
             for(int j=0;j<n;j++)
        cout<<ch[j];

        }
        cout<<endl;
        
    }
    return 0;
}