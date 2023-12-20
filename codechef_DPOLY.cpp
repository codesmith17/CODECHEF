#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,deg=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            if(arr[n-1]!=0 & j>=1)
            {
                deg++;
            }
        }
        cout<<deg<<endl;
        
    }

    return 0;
}