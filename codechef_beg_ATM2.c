#include<stdio.h>
int main()
{
    int t,n,k;
    
    scanf("%d",&t);
    int a[t][100];
    for(int i=0;i<t;i++)
    {
       scanf("%d %d",&n,&k);
       int arr[n];
       for(int j=0;j<n;j++)
       {
           scanf("%d",&(&arr[i][j]));
           if(arr[i][j]<=k)
           {
               a[i][j]=1;
               k=k-arr[j];
           }
           else
           a[i][j]=0;
       }
    }

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<100;j++)
        {
            if(a[i][j]>1 || a[i][j]<0)
            break;
            else
            printf("%d",a[i][j]);
        }
    }

    return 0;
}