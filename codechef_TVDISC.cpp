#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a-c>b-d)
        cout<<"Second"<<endl;
        if(a-c<b-d)
        cout<<"First"<<endl;
        if(a-b==c-d)
        cout<<"Any"<<endl;
    }

    return 0;
}