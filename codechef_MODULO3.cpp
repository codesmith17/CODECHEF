#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int num;
    for(int i=0;i<t;i++)
    {
        num=0;
        int a,b;
        cin>>a>>b;
        for(int j=0; ;j++)
        {
            if(a%3==0 || b%3==0)
            break;
            
            if(a>=b)
            {
                a=abs(a-b);
                num++;
                if(a%3==0 || b%3==0)
            break;
                b=abs(a-b);
                num++;
                if(a%3==0 || b%3==0)
            break;
            }
            else
            {
                b=abs(a-b);
                num++;
                if(a%3==0 || b%3==0)
            break;
                a=abs(a-b);
                num++;
                if(a%3==0 || b%3==0)
            break;
            }
            
        }
        cout<<num<<endl;
        
    }

    return 0;
}