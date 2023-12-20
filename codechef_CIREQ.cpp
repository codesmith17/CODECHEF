#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, f = 0;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            arr[j] = x;
            if (x >= i)
                f++;
        }
        if (n == f)
        {
            cout << "1" << endl;
            f = 0;
            exit(0);
        }
        sort(arr, arr + n);
        int k=0,index=1,zero=0;
        while(1)
        {
            
            for(int j=0;j<n;j++)
            {
                if(arr[j]>=index)
                {
                   
                    index++;
                    arr[j]=0;
                    zero++;
                }
                if(arr[j]<index)
                {
                   k++;
                   index++;
                   arr[j]=0; 
                   zero++;
                }
            }
            if(zero==n)
            {
                break;
            }
        }
    }

    return 0;
}