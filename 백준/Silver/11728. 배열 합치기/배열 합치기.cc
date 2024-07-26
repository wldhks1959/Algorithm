#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// var
int n, m;

void func(vector<int>& a, vector<int>& b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int pa = 0, pb = 0, resIdx = 0;
    vector<int> result(n+m);
    
    while (pa < n && pb < m)
    {
        if (a[pa] < b[pb])
        {
            result[resIdx++] = a[pa];
            pa++;
        }
        else
        {
            result[resIdx++] = b[pb];
            pb++;
        }
    }

    // remain
    while (pa < n)
        result[resIdx++] = a[pa++];
    while (pb < m)
        result[resIdx++] = b[pb++];

    for (int i : result)
        cout << i << " ";
}

int main()
{
    // input
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    // solve
    func(a, b);
    return 0;
}