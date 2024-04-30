#include <iostream>
#include <vector>
#include <queue>
#include <cstring> // memset
#define MAX 51
using namespace std;

int arr[MAX][MAX] = { 0, };
int visited[MAX][MAX]={0, };
int w, h;
int cnt =0;
int dw[] = { 1, 0, -1, 0 , 1 , 1,-1,-1 };
int dh[] = { 0, 1, 0 , -1, -1, 1,-1, 1 };

void bfs(int h, int w);

int main(void)
{
	while (1){
	    cin >> w >> h;
		if (w == 0 && h == 0) break;

		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> arr[i][j];
		
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				// 땅이 존재하고(1), 방문하지 않았을 때(0)
				if (!visited[i][j] && arr[i][j]) {
					cnt++;
					bfs(i, j);
				}
		cout << cnt <<"\n";

		memset(arr, false, sizeof(arr));
		memset(visited, false, sizeof(visited));
		cnt = 0;
	}
	return 0;
}

void bfs(int h, int w)
{
	queue<pair<int, int>> q;
	q.push({ h,w });

	visited[h][w] = 1;
	while (!q.empty())
	{
		h = q.front().first;
		w = q.front().second;
		q.pop();
		
		for (int i = 0; i < 8; i++)
		{
			int nh = h + dh[i];
			int nw = w + dw[i];

			if (0 <= nw && 0 <= nh && nw < MAX && nh < MAX)
			{
				if (arr[nh][nw] && !visited[nh][nw]) {
					visited[nh][nw] = 1;
					q.push({ nh,nw });
				}
			}
		}
	}
}