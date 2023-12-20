#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int(n);
    
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    
    cout<<"1. WATCH CURRENT ARRAY\n2. PUSH A NUMBER\n3. POP A NUMBER\nCHOOSE ANY OPTION";
    cout << "CURRENT ARRAY\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}