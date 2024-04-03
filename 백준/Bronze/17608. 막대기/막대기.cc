#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //var
    int max = 0, n, cnt = 0;
    stack<int> s;
    cin >> n;
    for (int i = 0, value; i < n; i++)
    {
        cin >> value;
        s.push(value);
    }

    while (s.size())
    {
        if (max < s.top())
        {
            max = s.top();
            cnt++;
        }
        s.pop();
    }
    cout << cnt;
    return 0;
}