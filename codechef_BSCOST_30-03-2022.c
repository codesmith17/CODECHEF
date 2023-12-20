#include<stdio.h>
int main()
{
    int t,n,x,y,sum0=0,sum1=0;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&x,&y);
        char ch[n];
       scanf(" %s",ch);
        for(int j=0;j<n;j++)
        {
           if(ch[j]=='1')
           sum1++;
           if(ch[j]=='0')
           sum0++;

        }
        
        if(sum1==n || sum0==n)
        arr[i]=0;
        else
        {
           if(x>y)
           arr[i]=y;
           if(y>x)
           arr[i]=x;
           if(y==x)
           arr[i]=x;
        }
        
        sum1=0;
        sum0=0;

    
    }
    for(int i=0;i<t;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}