#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,b;
        cin>>n>>b;
        int no=0,max=0;
        for(int j=0;j<n;j++)
        {
            int w,h,p;
            cin>>w>>h>>p;
            if(p>b)
            {
            no++;
            }
            else
            if(p<=b)
            {
                
                if(w*h>max)
                {
                    max=w*h;
                }
            }
        }
        if(no==n)
        {
            cout<<"no tablet"<<endl;
        }
        else
        {
            cout<<max<<endl;
        }
    }

    return 0;
}