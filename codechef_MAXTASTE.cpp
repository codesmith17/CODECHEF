#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,sum=0;
        cin>>a>>b>>c>>d;
        if(a>=b)
        {
            sum=sum+a;
        }
        else
        {
            sum=sum+b;
        }
        if(c>=d)
        {
            sum=sum+c;
        }
        else
        {
            sum=sum+d;
        }

        cout<<sum<<endl;
    }

    return 0;
}