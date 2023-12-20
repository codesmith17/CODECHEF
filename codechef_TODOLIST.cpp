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
        int count=0;
        int arr1[n];
        for(int j=0;j<n;j++)
        {
            
             cin>>arr1[j];
             if(arr1[j]>=1000)
             {
                 count++;
             }
        }
        cout<<count<<endl;

    }
    cout<<(-10)%3<<endl;

    return 0;
}