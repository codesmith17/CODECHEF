#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char ch[n];
        cin>>ch;
       
        for(int j=0;j<n-1;j=j+2)
        {
            int k=0;
            if(ch[j]=='0' && ch[j+1]=='0')
            {
                cout<<"A";
            }
             if(ch[j]=='0' && ch[j+1]=='1')
            {
                 cout<<"T";
            }
             if(ch[j]=='1' && ch[j+1]=='0')
            {
                 cout<<"C";
            }
             if(ch[j]=='1' && ch[j+1]=='1')
            {
                 cout<<"G";
            }
            



        }
        cout<<endl;
    }

    return 0;
}