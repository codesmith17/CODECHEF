#include <bits/stdc++.h>
using namespace std;
string decimalToBinary(int n)
{

    string s = bitset<64>(n).to_string();

    const auto loc1 = s.find('1');

    if (loc1 != string::npos)
        return s.substr(loc1);

    return "0";
}
bool check(string &s, int ind)
{
    if (ind == s.size() - 1)
        return false;
    if (s[ind] == s[ind + 1] and s[ind] == '1')
    {
        if (ind == s.size() - 2)
        {
            return true;
        }
    }
    if (s[ind] == s[ind + 1] and s[ind] == '1')
    {
        for (int j = ind + 2; j < s.size(); j++)
        {
            if (s[j] == '1')
                return false;
        }
    }
    return true;
}
int func(string &s, string &compare, int ind, int cnt)
{
    if (s == compare)
        return cnt;
    if (ind > s.size() - 1)
        return 1e9;

    int op1 = 1e9;
    if (check(s, ind))
    {
        s[ind] = '0';
        op1 = func(s, compare, ind + 1, cnt + 1);
        s[ind] = '1';
    }
    if (s.back() == '1')
        s.back() = '0';
    else
        s.back() = '1';
    int op2 = func(s, compare, ind, cnt + 1);
    if (s.back() == '1')
        s.back() = '0';
    else
        s.back() = '1';
    return min(op1, op2);
}

int minimumOneBitOperations(int n)
{
    string s = decimalToBinary(n);
    string compare(s.size(), '0');
    cout << compare;
    int cnt = 0;
    func(s, compare, 0, cnt);

    return cnt;
}
int main()
{
    cout << minimumOneBitOperations(3);
    cout << 1;
}
