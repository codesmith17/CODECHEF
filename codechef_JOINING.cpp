#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int op=0;
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=((i+1)/5)+1;
            if((i+1)%5==0)
            {
                arr[i]=(i+1)/5;
            }


        }
        
        
        for(int i=k-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];

            
        }
        for(int i=0;i<n-1;i++)
        {
            if((i+1)%5==0)
            {
                if(arr[i]!=(i+1)/5)
                {
                    op++;
                }
            }
            if(arr[i]!=((i+1)/5)+1 && (i+1)%5!=0)
            {
                op++;

            }
        }
        cout<<op<<endl;

    }

    return 0;
}