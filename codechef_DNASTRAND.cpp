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
        char ch;
        while(n--)
        {
        cin>>ch;
        if(ch=='A')
        cout<<'T';
         if(ch=='T')
        cout<<'A';
         if(ch=='C')
        cout<<'G';
         if(ch=='G')
        cout<<'C';
        }
        
        
        cout<<endl;
    }

    return 0;
}