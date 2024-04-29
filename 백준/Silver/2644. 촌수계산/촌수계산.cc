#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
queue<pair<int, int>> q;

int bfs(int start, int end);

int main()
{
	int n, m, start, end;
	cin >> n >> start >> end >> m;

	graph.resize(n + 1);
	visited.resize(n + 1, false);
	
	for (int i = 0; i < m; i++)
	{
		int parent, child;
		cin >> parent >> child;
		graph[parent].push_back(child);
		graph[child].push_back(parent);
	}
	int distance = bfs(start, end);
	cout << distance << "\n";
	return 0;
}

int bfs(int start, int end)
{
	q.push({ start,0 });
	while (!q.empty())
	{
		int cur = q.front().first;
		int distance = q.front().second;
		q.pop();
		if (cur == end) return distance;
		visited[cur] = true;
		for (int neighbor : graph[cur])
			if (!visited[neighbor]) q.push({ neighbor, distance + 1 });
	}
	return -1;
}