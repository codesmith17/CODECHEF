#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        
        if(n%2==0 && m%2==0)
        {
            
            cout<<"0"<<endl;
            continue;

        }
        if(n%2!=0 && m%2==0)
        {
            
            
            
           
            
            cout<<m<<endl;
            continue;
            
        }
        if(n%2==0 && m%2!=0)
        {
            
            
            
           
            
            cout<<n<<endl;
            continue;
            
        }
        if(n%2!=0 && m%2!=0 && n==m)
        {
            
            cout<<2*n-1<<endl;
            continue;

        }
        if(n%2!=0 && m%2!=0 )
        {
            cout<<n+m-1<<endl;
            continue;
        }
        
    }

    return 0;
}