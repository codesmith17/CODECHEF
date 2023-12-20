#include<stdio.h>
int main()
{
    int t,d;
    int arr[t];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&d);
        char ch[d];
        scanf(" %s",ch);
        for(int j=0;j<d;j++)
        {
            if(ch[j]=='0' || ch[j]=='5')
            {
                arr[i]=1;
                break;
            }
            else
            arr[i]=0;
        }
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