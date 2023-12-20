#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    int arr[3][t];
    int j=0,k=0;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&x);
        for(int a=0,b=0,c=0;a<x,b<x,c<x;a++,b++,c++)
        {
            if(a^b+b^c+c^a==x)
            {
                arr[j][k]=a;
                k++;
                arr[j][k]=b;
                k++;
                arr[j][k]=c;
                j++;

            }
            else
            

        }
    }

    return 0;
}