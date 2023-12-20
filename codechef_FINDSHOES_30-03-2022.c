#include<stdio.h>
int main()
{
    int t,n,m;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        if(m>n)
        arr[i]=n;
        else
        arr[i]=2*n-m;

    }
    for(int i=0;i<t;i++)
    printf("%d\n",arr[i]);

    return 0;
}