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
        string s;
        int st=0,lt=0;
        for(int j=0;j<n;j++)
        {
            
            cin>>s;
            if(s=="START38")
            {
                st++;
            }
            else
           if(s=="LTIME108")
           {
               lt++;
           }
            
        }
        cout<<st<<" "<<lt<<endl;
    }

    return 0;
}