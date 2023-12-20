#include<stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
       scanf("%d",&n);
       if(n<=2)
       printf("1\n");
       if(n==3)
       printf("2\n");
       else
       printf("%d\n",n);
    }

    return 0;
}