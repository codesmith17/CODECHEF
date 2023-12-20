#include<iostream>
using namespace std;
int main()
{
    double a,b;
    cin>>a;
    cin>>b;
    char c;
    cin>>c;
    if(b!=0)
    {
    if(c=='+')
    {
        cout<<a+b<<endl;
    }
    else
    if(c=='-')
    {
        cout<<a-b<<endl;
    }
    else
    if(c=='*')
    {
        cout<<a*b<<endl;
    }
    else
    if(c=='/')
    {
        cout<<a/b<<endl;
    }
    }
    return 0;
}