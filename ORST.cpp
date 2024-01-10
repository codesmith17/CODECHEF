#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int readInt()
{
    int number;
    cin >> number;
    return number;
}

void readArray(vector<int> &arr, int size)
{
    arr.resize(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(const vector<int> &arr)
{
    for (const auto &element : arr)
    {
        cout << element << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases = readInt();
    while (test_cases--)
    {
        int array_size = readInt();
        int k_value = readInt();

        vector<int> original_array;
        readArray(original_array, array_size);

        int max_index = 0;
        for (int i = 0; i < k_value; i++)
        {
            int x;
            cin >> x;
            max_index = max(max_index, x);
        }

        max_index = array_size - max_index + 1;

        vector<int> second_part(original_array.begin() + max_index - 1, original_array.end());
        sort(second_part.begin(), second_part.end());

        vector<int> first_part(original_array.begin(), original_array.begin() + max_index - 1);

        vector<int> result;
        for (const auto &element : first_part)
        {
            result.push_back(element);
        }

        for (const auto &element : second_part)
        {
            result.push_back(element);
        }

        printArray(result);
    }

    return 0;
}
