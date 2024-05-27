#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;
int t, cmd, value;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> cmd;
		if (cmd == 0)
		{
			if (pq.empty())
			{
				cout << 0 << "\n";
				continue;
			}
			cout << pq.top() << "\n";
			pq.pop();
		}
		else 
			pq.push(cmd);
	}
	return 0;
}