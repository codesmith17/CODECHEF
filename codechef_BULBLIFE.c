#include<stdio.h>
int main()
{
    int t,n,x;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {   
        scanf("%d %d",&n,&x);
        arr[i]=n*x;
        int ar1[n];
        for(int j=0;j<n-1;j++)
        {
            scanf("%d",&ar1[j]);
            arr[i]=arr[i]-ar1[j];
            
        }
        if(arr[i]<0)
        arr[i]=0;

    }
    for(int i=0;i<t;i++)
    printf("%d\n",arr[i]);

    return 0;
}