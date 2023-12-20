#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
        arr[i]=1;
        else
        arr[i]=2;
    }
    for(int i=0;i<t;i++)
    if(arr[i]==1)
    printf("A\n");
    else
    printf("B\n");
    return 0;
}