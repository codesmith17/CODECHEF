#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int max=0;
        for(int j=0;j<4;j++)
        {
            int k;
            cin>>k;
            if(k>max)
            {
                max=k;
            }
        }
        cout<<max<<endl;
    }

    return 0;
}