#include <iostream>
#include <algorithm>
#include <queue>
#define MAX 1002
using namespace std;

int map[MAX][MAX]; 
int dist[MAX][MAX]; 
int dx[4] = { 0,0,1,-1 }; 
int dy[4] = { 1,-1,0, 0 }; 
int n, m; 
queue<pair<int, int>> q; 

void bfs()
{
	while (!q.empty())
	{
		pair<int, int> cur = q.front(); 
		q.pop(); 
		for (int i = 0; i < 4; i++)
		{
			int nx = cur.first + dx[i]; 
			int ny = cur.second + dy[i]; 

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 지도 범위를 벗어나면 무시
			if (dist[nx][ny] != -1) continue; // 이미 방문한 곳이면 무시
			if (map[nx][ny] == 0) continue; // 갈 수 없는 곳이면 무시

			dist[nx][ny] = dist[cur.first][cur.second] + 1; // 거리 갱신

			q.push({ nx,ny }); // 큐에 새 위치 추가
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 0) cout << 0 << " "; // 갈 수 없는 곳은 0 출력
			else cout << dist[i][j] << " "; // 그 외는 거리 출력
		}
		cout << "\n"; 
	}
}

int main(void)
{
	cin >> n >> m; 
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			dist[i][j] = -1; // 거리 배열 초기화

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j]; // 지도 정보 입력
			if (map[i][j] == 2) // 시작 위치인 경우
			{
				q.push({ i, j }); // 큐에 추가
				dist[i][j] = 0; // 거리 초기화
			}
		}
	}

	bfs(); 
	return 0;
}
