#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n],f=0;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        for(int k=0;k<n;k++)
        {  int c=0;
            for(int l=k;l<n;l++)
            {
                if(arr[k]==arr[l])
                {
                    c++;
                    f++;
                }
                if(c>0)
                
            }
        }
    }

    return 0;
}