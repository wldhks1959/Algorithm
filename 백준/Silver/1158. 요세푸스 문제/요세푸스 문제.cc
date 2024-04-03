// 1158. 요세푸스 문제
#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main(void)
{
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) q.push(i);
	
	cout << "<";
	while (!q.empty())
	{
		for (int i = 0; i < k-1; i++)
		{
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		cout << q.front();
		q.pop();
		if (!q.empty()) cout << ", ";
	}
	cout << ">" << "\n";
	return 0;
}