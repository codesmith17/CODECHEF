#include<stdio.h>
int main()
{
    int t,n,m,k;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&m,&k);
        if(m-k>=n)
        arr[i]=1;
        else
        arr[i]=0;
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]==1)
        printf("Yes\n");
        else
        printf("No\n");
    }

    return 0;
}