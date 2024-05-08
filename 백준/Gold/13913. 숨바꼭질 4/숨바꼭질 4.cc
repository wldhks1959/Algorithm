#include <iostream>
#include <queue>
#include <vector>
#define MAX 100001
using namespace std;

int n, k;
bool visited[MAX];
int before[MAX];
vector<int> path;

void bfs(int a) 
{
	queue<pair<int, int>> q;
	q.push({ a,0 });
	visited[a] = true;
	while (!q.empty())
	{
		int x = q.front().first;
		int cnt = q.front().second;
		q.pop();

		if (x == k) 
		{ 
			cout << cnt << "\n";
			int idx = x;
			while (idx != n)
			{
				path.push_back(idx);
				idx = before[idx];
			}
			path.push_back(n);
			break;
		}
			

		if (x + 1 >= 0 && x + 1 < MAX && !visited[x + 1]) 
		{
			visited[x + 1] = true;  
			before[x + 1] = x;
			q.push({ x + 1,cnt + 1 });
		}
		if (x - 1 >= 0 && x - 1 < MAX && !visited[x - 1]) 
		{
			visited[x - 1] = true; 
			before[x - 1] = x; 
			q.push({ x - 1, cnt + 1 });
		}
		if (x * 2 >= 0 && x * 2 < MAX && !visited[x * 2]) 
		{
			visited[2 * x] = true; 
			before[2 * x] = x;
			q.push({ x * 2, cnt + 1 });
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	visited[n] = true;
	bfs(n);
	// res
	for (int i = path.size() - 1; i >= 0; i--)
		cout << path[i] << " ";
	return 0;
}