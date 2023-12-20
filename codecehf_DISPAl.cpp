#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         
        int n,x,op=0;
        cin>>n>>x;
        char ch[n];
        int val = (n / 2.0) + ((n % 2) != 0);
        int val1 = (n+1 / 2.0) + ((n+1 % 2) != 0);
        if(val<x)
        {
            cout<<"-1"<<endl;
           continue;
        }
       
          for(int i=0;i<ceil((n+1)/2.0);i++)
          {

            ch[i]= op+97; 
            ch[n-i]= op+97;
            if(n==2*i)
            ch[op]=op+97;
            op++;
            if(op==x)
            op=0;

        } 
         cout<<ch;
      
         cout<<endl;
        

    }

    return 0;
}