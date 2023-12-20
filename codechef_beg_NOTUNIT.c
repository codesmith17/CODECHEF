#include<stdio.h>
int gcd(int,int);
int main()
{
    int t,a,b;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {   
        scanf("%d %d",&a,&b);
        for(int j=a;j<=b;j++)
        {
            for(int k=a;k<=b;k++)
            {
                 if(gcd(j,k)>1 && a<=j && j<k && k<=b)

            }
        }
       
    }

    return 0;
}
gcd(int n1,int n2)
{
    int gcd;

    for(int i=1; i <= n1 && i <= n2; ++i)
    {
        
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    

    return gcd;
}