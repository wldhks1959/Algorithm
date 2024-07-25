#include <iostream>
#include <queue>

using namespace std;
int main()
{
    // var
    int n, m, cnt = 0; cin >> n >> m;
    deque<int> dq;

    // input
    for (int i = 1; i <= n; ++i) dq.push_back(i);

    // solve
    while (m--)
    {
        int t, tmp;
        tmp = 0;
        cin >> t;
        while (dq.front() != t)
        {
            dq.push_back(dq.front());
            dq.pop_front();
            tmp++;
        }
        if (tmp > (int)dq.size() / 2)
        {
            cnt += (dq.size() - tmp);
        }
        else
        {
            cnt += tmp;
        }
        dq.pop_front();
    }

    // result
    cout << cnt;
    return 0;
}