#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
       scanf("%d %d %d",&a,&b,&c);
       if(b*c>=a)
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