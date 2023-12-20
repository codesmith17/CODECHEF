#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mostFrequent(int *arr, int n)
{
    // code here
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxcount)
        {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }

    return element_having_max_freq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int x=mostFrequent(arr,n);
        
       
            if(x%2==0)
            cout<<n/2<<endl;
            if(x%2!=0)
            cout<<(n/2)+1<<endl;

         
    }

    return 0;
}