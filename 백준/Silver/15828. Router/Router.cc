//15858 router 
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int buf; cin >> buf;
	int value;
	queue<int> q;
	while (1)
	{
		cin >> value;
		if (value == -1) break;
		if (value > 0)
		{
			if (q.size() < buf) q.push(value);
		}
		if (value == 0) q.pop();
	}
	if (q.empty()) cout << "empty" << "\n";
	else
	{
		while (!q.empty())
		{
			cout << q.front() << " ";
			q.pop();
		}
	}
	return 0;
}