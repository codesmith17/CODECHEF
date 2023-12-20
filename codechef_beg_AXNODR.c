#include<stdio.h>
void axnodr()
{
    int t,n;
    scanf("%d",&t);
    int arr[t];

    for(int i=0;i<t;i++)
    {
      scanf("%d",&n);
      int b=1;
      for(int j=2;j<=n;j++)
      {
          if(j%2==0)
          b=b^j;
          else
          if(j%2!=0)
          b=b&j;
      }
      arr[i]=b;
    }
    for(int i=0;i<t;i++)
    {
        printf("%d\n",arr[i]);
    }

}
int main()
{
    axnodr();
    return 0;
}