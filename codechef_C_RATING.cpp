#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        int d=y-x;
        if(d%8!=0)
        {
            cout<<d/8+1<<endl;
        }
        else
        {
            cout<<d/8<<endl;
        }
    }

    return 0;
}