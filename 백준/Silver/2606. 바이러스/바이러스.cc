//2606
#include <iostream>
#include <vector>
using namespace std;
vector<int> ver[101];
bool checked[1001];
int cnt = 0;

void dfs(int x) {
   checked[x] = true;
   for (int i = 0; i < ver[x].size(); i++) {
      int y = ver[x][i];
      if (!checked[y]) {
         dfs(y);
         cnt++;
      }
   }
}

int main() {
   int n, m; // v:정점, e:엣지
   cin >> n >> m;
   for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      ver[u].push_back(v);
      ver[v].push_back(u);
   }//edge connect 
   dfs(1); // 1 번 vertex dfs
   cout << cnt;
   return 0;
}