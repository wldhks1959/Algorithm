#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    vector<int> res(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());


    for (int i = 0; i < n; i++) res[v[i].second] = i;

    for (int i = 0; i < n; i++) cout << res[i] << " ";
    return 0;
}
