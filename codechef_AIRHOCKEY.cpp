#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            cout<<7-a<<endl;
        }
        if(b>=a)
        {
            cout<<7-b<<endl;
        }
    }

    return 0;
}