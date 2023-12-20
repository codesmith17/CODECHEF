#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int count=0;
        while(1)
        {
        
            
            // if(ceil(log2(x))==floor(log2(x)))
            // {
            //     count=0;

            //     break;
                
            // }
             if(x==0)
            break;
            
            int k=log2(x);
         
            x=x-pow(2,k);
            count++;
           
        }
       
        cout<<count-1<<endl;
        
    }

    return 0;
}