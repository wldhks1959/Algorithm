#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;

int N, M, V;
int map[MAX][MAX]; // 인접 행렬 그래프
bool visited[MAX];
queue<int> q;

void reset() 
{
	for (int i = 1; i <= N; i++) 
		visited[i] = 0;
}

void dfs(int v)
{
	visited[v] = true; 
	cout << v << " ";

	for (int i = 1; i <= N; i++)
	{
		if (map[v][i] == 1 && visited[i] == 0) dfs(i); // 현재 정점과 연결되어있고, 방문되지 않았으면 
	}
}

void bfs(int v)
{
	q.push(v); //대기열에 넣기 
	visited[v] = true; //방문 처리 
	cout << v << " ";

	while(!q.empty()) //q가 비어있지 않을 동안 
	{
		v = q.front();
		q.pop();

		for (int j = 1; j <= N; j++)
		{
			if (map[v][j] == 1 && visited[j] == 0)
			{
				q.push(j);
				visited[j] = true;
				cout<<j<<" ";
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}

	reset();
	dfs(V);

	cout << "\n";

	reset();
	bfs(V);

	return 0;
}