#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      mp[i + 1] = a;
    }

    int sad = 0;
    for (int i = 0; i < m; i++)
    {
      int a;
      cin >> a;

      if (mp.find(a) != mp.end() and mp[a] > 0)
      {
        mp[a]--;
      }
      else
      {
        sad++;
      }
    }

    cout << sad << endl;
  }
  return 0;
}
