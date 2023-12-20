#include<stdio.h>
#include<math.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        arr[i]=abs(x-y);
    }
    for(int i=0;i<t;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}