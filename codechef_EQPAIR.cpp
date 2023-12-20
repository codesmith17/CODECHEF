#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{

    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {

        if (visited[i] == true)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main()
{
    long long int f;
    cin >> f;
    while (f--)
    {
        long long int k;
        cin >> k;
        long long int arr[k], res = 0;
        unordered_map<long long int, long long int> tata;
        for (long long int i = 0; i < k; i++)
        {
            cin >> arr[i];
            tata[arr[i]]++;
        }
        for (auto it : tata)
        {
            if (it.second > 1)
            {
                long long int t = it.second;
                res = res + t * (t - 1) / 2;
            }
        }
        cout << res << endl;
    }
    return 0;
}
