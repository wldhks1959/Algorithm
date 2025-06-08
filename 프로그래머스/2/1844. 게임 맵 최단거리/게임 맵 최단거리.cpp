#include <vector>
#include <queue>
#include<cstring>

using namespace std;
#define MAX 102

bool visited[MAX][MAX] = {false};
int dist[MAX][MAX];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pair<int,int>> q;

int solution(vector<vector<int> > m){
    int ns = m.size(); // 미로의 세로 (y축 길이)
    int ms = m[0].size(); // 미로의 가로 (x축 길이)
    memset(dist, -1 , sizeof(dist)); // 모든 칸에 아직 도달하지 못했음을 의미
    
    q.push({0,0}); // (y, x) 순
    visited[0][0] = true;
    dist[0][0] = 1;
    
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        if(cur.first == ns-1 && cur.second == ms-1){
            // 도착 지점에 도달했을 경우
            return dist[ns-1][ms-1];
        }
        // 현재 칸에서 상하좌우 4방향으로 이동 시도
        for(int dir=0; dir<4;dir++) {
            int nx = cur.second + dx[dir]; // 다음 이동할 칸의 x 좌표 계산
            int ny = cur.first + dy[dir];
            if(nx < 0 || ny < 0 || nx>=ms || ny>=ns) {
                // 범위 밖이면 이번 방향을 건너뛰고 다음 방향으로 넘어가기
                continue;
            }
            
            if(visited[ny][nx] || m[ny][nx] == 0) {
                // 방문했거나, 벽이면 스킵
                continue;
            }
                
            q.push({ny, nx}); // 다음 칸을 큐에 추가하여 나중에 탐색하도록 한다. 
            visited[ny][nx] = true;
            dist[ny][nx] = dist[cur.first][cur.second]+1; // 현재 칸까지의 거리에 1을 더한다.
        }
    }
    
    int ans = 0;
    if(dist[ns-1][ms-1] == -1) 
        ans = -1;
    else 
        ans = dist[ns-1][ms-1];
    return ans;
}