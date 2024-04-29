#include <iostream>
#include <vector>
#include <queue>
#define MAX 301
using namespace std;

int dx[8] = { 2,1,-1,-2,-2,-1,1,2 };
int dy[8] = { 1,2,2,1,-1,-2,-2,-1 };
int t, n;
int cx, cy, tx, ty; // c : cur, t : to
int check[MAX][MAX];
queue<pair<int, int>> q;

void bfs()
{
    cin >> n;
    for (int i = 0; i < n; i++) fill(check[i], check[i] + n, -1);
    cin >> cx >> cy; 
    check[cx][cy] = 0;
    q.push({ cx,cy });
    cin >> tx >> ty; 

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int i = 0; i < 8; i++) 
        { 
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (check[nx][ny] >= 0) continue;

            check[nx][ny] = check[cur.first][cur.second] + 1;
            q.push({ nx,ny });
        }
    }
    cout << check[tx][ty] << '\n';
}

int main() 
{
    cin >> t;
    while (t--) bfs();
    return 0;
}