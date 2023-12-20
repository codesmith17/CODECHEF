#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int countne=0,countse=0,countsw=0,countnw=0;
        int n,x,y;
        cin>>n>>x>>y;
        for(int X=x,Y=y;X>=1,X<=n,Y>=1,Y<=n;X++,Y++)
        {
            countne++;
            

        }
        for(int X=x,Y=y;X>=1,X<=n,Y>=1,Y<=n;X++,Y--)
        {
            countse++;
            

        }
        for(int X=x,Y=y;X>=1,X<=n,Y>=1,Y<=n;X--,Y--)
        {
            countsw++;
            

        }
        for(int X=x,Y=y;X>=1,X<=n,Y>=1,Y<=n;X--,Y++)
        {
            countnw++;
            

        }
        cout<<countne-1<<endl;
        cout<<countse-1<<endl;
        cout<<countsw-1<<endl;
        cout<<countnw-1<<endl;
    }

    return 0;
}