#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[101];
        for(int j=1;j<=10;j++)
        {
            arr[j]=j;
        }
         for(int j=11;j<=20;j++)
        {
            arr[j]=j;
        }
         for(int j=21;j<=30;j++)
        {
            arr[j]=j;
        }
         for(int j=31;j<=40;j++)
        {
            arr[j]=j;
        }
         for(int j=41;j<=50;j++)
        {
            arr[j]=j;
        }
         for(int j=51;j<=60;j++)
        {
            arr[j]=j;
        }
         for(int j=61;j<=70;j++)
        {
            arr[j]=j;
        }
         for(int j=71;j<=80;j++)
        {
            arr[j]=j;
        }
         for(int j=81;j<=90;j++)
        {
            arr[j]=j;
        }
         for(int j=91;j<=100;j++)
        {
            arr[j]=j;
        }
        int x,y;
        cin>>x>>y;


        int k1=ceil(arr[x]/10.0);
         int k2=ceil(arr[y]/10.0);
        cout<<abs(k2-k1)<<endl;
          
    }

    return 0;
}