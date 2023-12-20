#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if(w+(y*z)>x)
        cout<<"OVERFLOW"<<endl;
        else
        if(w+(y*z)==x)
        cout<<"FILLED"<<endl;
        else
        if(w+(y*z)<x)
        cout<<"UNFILLED"<<endl;
    }

    return 0;
}