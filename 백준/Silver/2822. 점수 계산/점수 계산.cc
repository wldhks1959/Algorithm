#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> arr[8];
int index[5];

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main(void)
{
    for (int i = 0; i < 8; i++)
    {
        int value;
        cin >> value;
        arr[i] = { i + 1, value };
    }

    int sum = 0;

    sort(arr, arr + 8, comp);

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i].second;
        index[i] = arr[i].first;
    }

    sort(index, index + 5);

    cout << sum << "\n";
    for (int i = 0; i < 5; i++)
        cout << index[i] << " ";

    return 0;
}
