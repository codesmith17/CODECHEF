#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,x;
        cin>>n>>m;
        long a,b;
        a=0;
        b=0;
        if(m<2*n)
        {
            cout<<m<<" "<<m<<endl;
            continue;
        }
        else if(m%n==0)
        {
            cout<<m<<" "<<n<<endl;
            continue;
        }
        else
        {
            x=m/2;
            if(m>=2*n){
                x=2*n;
            }
        }
        long dsa=0;

        for(long i=n;i<x;i++)
        {
            long s=m/i;
            long f=(i*s)-i;
            if(f>dsa)
            {
                a=i;
                b=i*s;
                dsa=f;
            }
            


        }
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}