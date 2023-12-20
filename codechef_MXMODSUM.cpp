#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int max=arr[0]+arr[0]+(arr[0]%arr[0] + arr[0])%arr[0];
        for(int k=0;k<n;k++)
        {
            for(int l=0;l<n;l++)
            {
                if((arr[k]+arr[l]+(arr[k]%arr[l] + arr[k])%arr[l])>max)
                {
                      max=(arr[k]+arr[l]+(arr[k]%arr[l] + arr[k])%arr[l]);
                }
            }
        }
        cout<<max<<endl;
    }

    return 0;
}