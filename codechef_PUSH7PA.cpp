#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int small,max;
        int n,pushpa;
        cin>>n;
        int arr1[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr1[j];
        }
        for(int j=0; j<n; j++)
        {
                if(small>arr1[j])
                {
                        small=arr1[j];
                }
        }
        for(int j=0; j<n; j++)
        {
                if(max<arr1[j])
                {
                        max=arr1[j];
                }
        }
        for(int j=0;j<n;j++)
        {
            pushpa=small;
            for(int k=0;k<n;k++)
            {
                if(arr1[k]!=small)
                {
                   
                }
            }
            if(arr1[j]==small+1)
            {
               pushpa=arr1[j];
            }

        }

    }

    return 0;
}