#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int k;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int j=0;;j++)
        {
            if(j%2==0)
            {
                a++;
            }
            else
            a--;

            if(a==b)
            {
                k=1;
                break;
            }
            if(a>b)
            {
                k=0;
                break;
            }
            
        }
    }
    if(k==1)
    cout<<"YES"<<endl;
    if(k==0)
    cout<<"NO"<<endl;

    return 0;
}