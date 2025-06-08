#include <iostream>
#include <queue>
#include <algorithm>
#define MAX 1002
using namespace std;

// 그래프 초기화
int n, m, start_node;
vector<int> adjList[MAX];
bool visited[MAX] = { false };
queue<int> q;

void reset() {
	for (int i = 1; i <= n; i++) {
		visited[i] = false;
	}
}

void bfs(int start) {
	q.push(start);
	visited[start] = true;
	printf("%d ", start);

	while (!q.empty()) {
		int cur_node = q.front();
		q.pop();
		
		for (int neigbor : adjList[cur_node]) {
			if (!visited[neigbor]) {
				q.push(neigbor);
				visited[neigbor] = true;
				printf("%d ", neigbor);
			}
		}
	}
}



void dfs(int start) {
	visited[start] = true;
	printf("%d ", start);

	for (int neighbor : adjList[start]) {
		if (!visited[neighbor]) {
			dfs(neighbor);
		}
	}
}

int main(void) {
	
	scanf("%d %d %d", &n, &m, &start_node);
	// 간선 추가
	for (int i = 0; i < m; i++){
		int u, v;
		scanf("%d %d", &u, &v);
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

	// 각 노드의 인접 리스트를 정렬
	for (int i = 1; i <= n; i++) {
		sort(adjList[i].begin(), adjList[i].end());
	}


	dfs(start_node);
	printf("\n");
	reset();
	bfs(start_node);


	return 0;
}