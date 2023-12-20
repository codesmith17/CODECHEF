#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>b)
        {
            b=b+c;
        }
        if(a==b)
        {
            b=b+c;
        }
        if(a<b)
        {
            a=a+c;
        }
        if(a==b)
        {
            b=b+c;
        }
        if(a>b)
        {
            b=b+d;
        }
        if(a==b)
        {
            b=b+c;
        }
        if(a<b)
        {
            a=a+d;
        }
        if(a==b)
        {
            b=b+c;
        }

        if(a>b)
        printf("S\n");
        if(b>a)
        printf("N\n");
        if(b==a)
        printf("N\n");
    }


    return 0;
}