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
        int a1=500-x*2;
        int b1=1000-(y+x)*4;
        int a2=1000-y*4;
        int b2=500-(x+y)*2;
        int sol1=a1+b1;
        int sol2=a2+b2;
        if(sol1>sol2)
        cout<<sol1<<endl;
        else
        if(sol2>=sol1)
        cout<<sol2<<endl;


    

    }


    return 0;
}