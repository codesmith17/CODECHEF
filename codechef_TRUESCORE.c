#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        scanf("%d %d",&c,&d);
        if(c<a || b<d || a<0 || b<0 || c<0 || d<0 || a>10 || b>10 || c>10 || d>10)
        arr[i]=0;
        else
        arr[i]=1;


    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]==1)
        printf("POSSIBLE\n");
        else
        printf("IMPOSSIBLE\n");
    }

    return 0;
}