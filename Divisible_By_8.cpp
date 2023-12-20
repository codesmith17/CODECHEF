#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s2;
        cin >> n >> s2;
        if (n == 1)
        {
            int num = stoi(s2);
            if (num % 8 == 0)
                cout << s2 << endl;
            else
            {
                s2[0] = '8';
                cout << s2 << endl;
            }
        }
        else if (n == 2)
        {
            int num = stoi(s2);
            if (num % 8 == 0)
                cout << s2 << endl;
            else
            {
                string temp = "";
                temp += s2[n - 2];
                temp += s2[n - 1];
                if (temp[0] == '0' && temp[1] != '0')
                {
                    int n5 = stoi(temp);
                    if (n5 % 8 == 0)
                        cout << s2 << endl;
                    else
                    {
                        s2[n - 1] = 8;
                        cout << s2 << endl;
                    }
                }
                else if (temp[0] == '0' && temp[1] == '0')
                    cout << s2 << endl;
                else
                {
                    int mod1 = (num / 8) + 1;
                    int mod2 = (num / 8) - 1;
                    int ans1 = 8 * mod1;
                    int ans2 = 8 * mod2;
                    string str1 = to_string(ans1);
                    string str2 = to_string(ans2);
                    int c1, c2;
                    c1 = c2 = 0;
                    for (int i = 0; i < 2; i++)
                    {
                        if (str1[i] != temp[i])
                            c1++;
                        if (str2[i] != temp[i])
                            c2++;
                    }
                    if (c1 <= c2)
                    {

                        s2[n - 2] = str1[0];
                        s2[n - 1] = str1[1];
                    }
                    else
                    {
                        s2[n - 2] = str2[0];
                        s2[n - 1] = str2[1];
                    }
                    cout << s2 << endl;
                }
            }
        }
        else
        {
            string temp = "";
            temp += s2[n - 3];
            temp += s2[n - 2];
            temp += s2[n - 1];
            int num = stoi(temp);
            // cout<<num<<endl;
            if (temp[0] == '0' && temp[1] != '0')
            {
                string temp2 = "";
                temp2 += s2[n - 2];
                temp2 += s2[n - 1];
                if (num % 8 == 0)
                    cout << s2 << endl;
                else
                {
                    int mod1 = (num / 8) + 1;
                    int mod2 = (num / 8) - 1;
                    int ans1 = 8 * mod1;
                    int ans2 = 8 * mod2;
                    string str1 = to_string(ans1);
                    string str2 = to_string(ans2);
                    int c1, c2;
                    c1 = c2 = 0;
                    for (int i = 0; i < 2; i++)
                    {
                        if (str1[i] != temp2[i])
                            c1++;
                        if (str2[i] != temp2[i])
                            c2++;
                    }
                    if (c1 <= c2)
                    {

                        s2[n - 2] = str1[0];
                        s2[n - 1] = str1[1];
                    }
                    else
                    {
                        s2[n - 2] = str2[0];
                        s2[n - 1] = str2[1];
                    }
                    cout << s2 << endl;
                }
            }
            else if (temp[0] == '0' && temp[1] == '0')
            {
                if (num % 8 == 0)
                    cout << s2 << endl;
                else
                {
                    s2[n - 1] = '8';
                    cout << s2 << endl;
                }
            }
            else if (temp[0] == '0' && temp[1] == '0' && temp[2] == '0')
                cout << s2 << endl;
            else
            {
                if (num % 8 == 0)
                    cout << s2 << endl;
                else
                {
                    int mod1 = (num / 8) + 1;
                    int mod2 = (num / 8) - 1;
                    int ans1 = 8 * mod1;
                    int ans2 = 8 * mod2;
                    string str1 = to_string(ans1);
                    string str2 = to_string(ans2);
                    int c1, c2;
                    c1 = c2 = 0;
                    for (int i = 0; i < 3; i++)
                    {
                        if (str1[i] != temp[i])
                            c1++;
                        if (str2[i] != temp[i])
                            c2++;
                    }
                    if (c1 <= c2)
                    {
                        s2[n - 3] = str1[0];
                        s2[n - 2] = str1[1];
                        s2[n - 1] = str1[2];
                    }
                    else
                    {
                        s2[n - 3] = str2[0];
                        s2[n - 2] = str2[1];
                        s2[n - 1] = str2[2];
                    }
                    cout << s2 << endl;
                }
            }
        }
    }
    return 0;
}