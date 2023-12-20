#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int j=0; ;j++)
        {
            int op=0;
            a--;
            if(a==0)
            {
                op++;
            break;
            }
            b--;
           if(b==0)
            {
                op++;
            break;
            }
        }
    }

    return 0;
}