#include<stdio.h>
#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(z%x==0)
        arr[i]=1;
        if(z%y==0)
        arr[i]=2;
        if(z%x==0 && z%y==0)
        arr[i]=3;
        if(z%x!=0 && z%y!=0)
        arr[i]=4;

    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]==1)
        printf("CHICKEN\n");
        if(arr[i]==2)
        printf("DUCK\n");\
        if(arr[i]==3)
        printf("ANY\n");
        if(arr[i]==4)
        printf("NONE\n");
    }

    return 0;
}