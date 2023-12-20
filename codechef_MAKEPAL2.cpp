#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {

        int l;
        cin >> l;
        char ch[l];
        for(int j=0;j<l;j++)
        {
            cin>>ch[j];
        }
        int one=0,zero=0;
        for(int j=0;j<l;j++)
        {
            if(ch[j]=='1')
            one++;



        }
        
        for(int j=0;j<l;j++)
        {
             if(ch[j]=='0')
            zero++;
           
        }
        if(zero>=one)
        {
            for(int j=0;j<l;j++)
            {
                if(ch[j]=='1')
                continue;
                else
                {
                    cout<<"0";
                }
            }
            cout<<endl;
        }
        if(one>zero)
        {
            for(int j=0;j<l;j++)
            {
                if(ch[j]=='0')
                continue;
                else
                {
                    cout<<"1";
                }
            }
            cout<<endl;
        }
       
    }

    return 0;
}