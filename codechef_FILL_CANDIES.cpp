#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        int n,k,m;
        cin>>n>>k>>m;
        int b=0;
        while(n>0)
        {

        
        if(k*m>=n)
        {
         n=n-m*k;
         b++;
        }
        if(k*m<n)
        {
            
            b++;
            n=n-m*k;



        }
        }
        cout<<b<<endl;


    }

    return 0;
}