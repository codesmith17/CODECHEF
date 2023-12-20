#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int X,Y;
      
        if(abs(y1-y2)==1 && abs(x1-x2)==1 && x1>x2 && y1>y2)
        {
            X=x1+1;
            Y=y1-2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
        if(abs(y1-y2)==3 && abs(x1-x2)==1 && x1>x2 && y1>y2)
        {
            X=x1+1;
            Y=y1-2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
        if(abs(y1-y2)==4 && abs(x1-x2)==0 && x1==x2 && y1>y2)
        {
            X=x1+1;
            Y=y1-2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
          if(abs(y1-y2)==4 && abs(x1-x2)==2 && x2>x1 && y1>y2)
        {
            X=x1+1;
            Y=y1-2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
          if(abs(y1-y2)==3 && abs(x1-x2)==3 && x2>x1 && y1>y2)
        {
            X=x1+1;
            Y=y1-2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
          if(abs(y1-y2)==1 && abs(x1-x2)==3 && x2>x1 && y1>y2)
        {
            X=x1+1;
            Y=y1-2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
          if(abs(y1-y2)==0 && abs(x1-x2)==2 && x2>x1 && y1==y2)
        {
            X=x1+1;
            Y=y1-2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==0 && abs(y1-y2)==2 && x2==x1 && y1>y2)
        {
            X=x1+2;
            Y=y1-1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==1 && abs(y1-y2)==3 && x2>x1 && y1>y2)
        {
            X=x1+2;
            Y=y1-1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==3 && abs(y1-y2)==3 && x2>x1 && y1>y2)
        {
            X=x1+2;
            Y=y1-1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==4 && abs(y1-y2)==2 && x2>x1 && y1>y2 )
        {
            X=x1+2;
            Y=y1-1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==4 && abs(y1-y2)==0 && x2>x1 && y1==y2)
        {
            X=x1+2;
            Y=y1-1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==3 && abs(y1-y2)==1 && x2>x1 && y2>y1)
        {
            X=x1+2;
            Y=y1-1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==1 && abs(y1-y2)==1 && x2>x1 && y1>y2)
        {
            X=x1+2;
            Y=y1+1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==3 && abs(y1-y2)==1 && x2>x1 && y1>y2 )
        {
            X=x1+2;
            Y=y1+1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==4 && abs(y1-y2)==0 && x2>x1 && y1==y2)
        {
            X=x1+2;
            Y=y1+1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==4 && abs(y1-y2)==2 && x2>x1 && y2>y1)
        {
            X=x1+2;
            Y=y1+1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==3 && abs(y1-y2)==3 && x2>x1 && y2>y1)
        {
            X=x1+2;
            Y=y1+1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==2 && abs(y1-y2)==0 && x2>x1 && y1==y2 )
        {
            X=x1+1;
            Y=y1+2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==3 && abs(y1-y2)==1 && x2>x1 && y2>y1)
        {
           X=x1+1;
            Y=y1+2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==3 && abs(y1-y2)==3 && x2>x1 && y2>y1)
        {
            X=x1+1;
            Y=y1+2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
         if(abs(x1-x2)==2 && abs(y1-y2)==4 && x2>x1 && y2>y1 )
        {
            X=x1+1;
            Y=y1+2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
        if(abs(x1-x2)==1 && abs(y1-y2)==1 && x2>x1 && y2>y1)
        {
            X=x1-1;
            Y=y1+2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
        if(abs(x1-x2)==1 && abs(y1-y2)==3 && x2>x1 && y2>y1)
        {
            X=x1-1;
            Y=y1+2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
        if(abs(x1-x2)==0 && abs(y1-y2)==4 && x2==x1 && y2>y1)
        {
            X=x1-1;
            Y=y1+2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
        if(abs(x1-x2)==0 && abs(y1-y2)==2 && x2==x1 && y2>y1)
        {
            X=x1-2;
            Y=y1+1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
        if(abs(x1-x2)==1 && abs(y1-y2)==3 && x1>x2 && y2>y1)
        {
            X=x1-2;
            Y=y1+1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
        if(abs(x1-x2)==1 && abs(y1-y2)==1 && x1>x2 && y2>y1)
        {
            X=x1-2;
            Y=y1-1;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }
        if(abs(x1-x2)==2 && abs(y1-y2)==0 && x2>x1 && y2==y1)
        {
            X=x1+1;
            Y=y1-2;
            if(X>0 && Y>0)
            {
                cout<<"YES"<<endl;

            }
            else
            cout<<"NO"<<endl;

        }


      /*  for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                X=i,Y=j;
                if(((X+1==x1 && Y-2==y1) && (X-1==x2 && Y-2==y2)) || ((X+1==x1 && Y-2==y1) && ((X+1==x1 && Y-2==y1)))
            }
        }*/


    }

    return 0;
}