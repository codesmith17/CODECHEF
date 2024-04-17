#include <iostream>
#include <vector>
#include <string>
using namespace std;

int readInt()
{
    int num;
    cin >> num;
    return num;
}

string readString()
{
    string str;
    cin >> str;
    return str;
}

int main(int argc, char *argv[])
{
    int test_cases = readInt();

    while (test_cases--)
    {
        int length = readInt();
        string sequence = readString();

        int a = 0, b = 0, c = 0, d = 0;

        for (int i = 0; i < length; i += 2)
        {
            if (sequence[i] == '0' && sequence[i + 1] == '0')
            {
                a++;
            }
            else if (sequence[i] == '0' && sequence[i + 1] == '1')
            {
                b++;
            }
            else if (sequence[i] == '1' && sequence[i + 1] == '1')
            {
                c++;
            }
            else
            {
                d++;
            }
        }

        int total_operations = 0;

        if (d > 0)
        {
            total_operations = 1;
            d--;
        }

        total_operations += 2 * a;

        total_operations += (b > 0) ? 2 : 0;

        total_operations += 2 * c;

        if (d > 0)
        {
            total_operations++;
        }

        cout << total_operations << endl;
    }

    return 0;
}
