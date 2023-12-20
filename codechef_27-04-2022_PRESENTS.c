#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n>4)
        arr[i]=n-n/4;
        if(n<=4)
        arr[i]=n;
    
    }
    for(int i=0;i<t;i++)
    printf("%d\n",arr[i]);

    return 0;
}
