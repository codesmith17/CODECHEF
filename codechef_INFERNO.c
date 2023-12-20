#include<stdio.h>
int main()
{
    int t,max,time=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int arr[n],a2[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
            a2[j]=arr[j];
            
        }
        for(int j=0;j<n;j++)
        {
            max=arr[0];
            if(arr[j]>arr[0])
            max=arr[j];
        }

        for(int j=0;j<n;j++)
        {
           while(1)
           {
               a2[j]=a2[j]-x;
               if(a2[j]<=0)
               {
                   time++;
                   break;
               }
           }
        }

        if(max>=time)
        printf("%d\n",time);
        else
        printf("%d\n",max);
        
    }

    return 0;
}