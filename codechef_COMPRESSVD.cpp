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
        int f=n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
             cin>>arr[j];
        }

        for(int k=0;k<n;k++)
        {
            if(arr[k]==arr[k+1] )
            {
                f--;
 
            }
        }
        cout<<f<<endl;
    }

    return 0;
}