#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int arr[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
            if(arr[j]<=k)
            {
                printf("1");
                k=k-arr[j];
            }
            else
            if(arr[j]>k)
            {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}