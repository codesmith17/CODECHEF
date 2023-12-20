#include<stdio.h>
int main()
{
    int t;
    int arr[t];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        arr[i]=x*y*z;
    }
    for(int i=0;i<t;i++)
    printf("%d\n",arr[i]);

    return 0;
}