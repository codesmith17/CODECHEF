#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int op=0;
    while(t--)
    {
       int n,min;
       cin>>n;
       
      min=n*10000;
      int a[n],b[n];
       for(int a=1;a<n;a++)
       {
         
         
        for(int b=1;b<n;b++)
        {
            if(__gcd(a,b)+a*b/__gcd(a,b)<min && a+b==n)
            {
                min=__gcd(a,b)+a*b/__gcd(a,b);
                
                
            }
           

        }
       }
      
        for(int a=1;a<n;a++)
       {
         
         
        for(int b=1;b<n;b++)
        {
            if(__gcd(a,b)+a*b/__gcd(a,b)==min && a+b==n)
            {
                op++;
                
            }
           

        }
        
        

       }
       cout<<op<<endl;
      op=0;
       

       }
     
    
    

    return 0;
}