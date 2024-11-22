#include <iostream>
#include<vector>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  bool p = false;
  for (int x = 0; x < n; x++)
  {
    bool w = true;
    int bm = 0, bi = -1;

    for (int y = 0; y < n; y++)
    {
      if (y == x)
        continue;
      if (a[y] > bm)
      {
        bm = a[y];
        bi = y;
      }
    }

    int am = max(a[x], b[x]);
    int cm = max(a[bi], b[bi]);

    if (am <= cm)
      w = false;
    if (w)
    {
      p = true;
      break;
    }
  }

  cout << (p ? "Yes" : "No") << "\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}