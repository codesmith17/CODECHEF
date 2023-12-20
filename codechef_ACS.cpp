#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int x=a/100;
        int y=a%100;
        if(x+y<=10)
        cout<<x+y<<endl;
        else
        cout<<"-1"<<endl;
    }

    return 0;
}