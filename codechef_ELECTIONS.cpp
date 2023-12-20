#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int xa,xb,xc;
        cin>>xa>>xb>>xc;
        if(xa>xb && xa>>xc)
        cout<<"A"<<endl;
        if(xb>xa && xb>>xc)
        cout<<"B"<<endl;
        if(xc>xb && xc>>xa)
        cout<<"C"<<endl;

    }


    return 0;
}