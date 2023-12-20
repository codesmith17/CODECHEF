#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
       scanf("%d %d",&x,&y);
       arr[i]=y%x;

    }
    for(int i=0;i<t;i++)
    printf("%d\n",arr[i]);

    return 0;
}