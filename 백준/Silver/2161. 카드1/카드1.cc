// 2161 카드 1 
#include <iostream>
#include <deque>
using namespace std;

deque<int> q;

int main(void)
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) q.push_front(i);
	
	while (!q.empty())
	{
		int tmp = q.back(); q.pop_back();
		cout << tmp<<" ";
		if (!q.empty()) {
			tmp = q.back(); q.pop_back(); q.push_front(tmp);
		}
	}
	return 0;

	
}