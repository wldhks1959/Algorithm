#include <iostream>
#include <string.h>
using namespace std;

int dy[4] = { 1,-1,0,0 };
int dx[4] = { 0,0,1,-1 };
int m, n, k;
int arr[50][50] = {0, };
int visited[50][50] = {0, };

void dfs(int y, int x) 
{
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
        //방문 x이고 배추 있다면 탐색 계속
        if (arr[ny][nx] && !visited[ny][nx])
        {
            visited[ny][nx]++;
            dfs(ny, nx);
        }
    }
}

int main() {
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> m >> n >> k;

        //초기화
        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));

        int res = 0; //지렁이 개수

        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            arr[y][x] = 1;
        }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (arr[i][j] && !visited[i][j]) {
                    res++;
                    visited[i][j]++;
                    dfs(i, j);
                }
        cout << res<<"\n";
    }
    return 0;
}

