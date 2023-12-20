#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>=1 && y>=1 && x==y)
        printf("YES\n");
        else
        printf("NO\n");
    }

    return 0;
}