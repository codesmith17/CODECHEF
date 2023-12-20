#include<stdio.h>
int main()
{
    int t,x,y,m;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&m);
        if(y>(x*m))
        arr[i]=1;
        else
        arr[i]=0;
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]==1)
        printf("YES\n");
        else
        printf("NO\n");

    }

    return 0;
}