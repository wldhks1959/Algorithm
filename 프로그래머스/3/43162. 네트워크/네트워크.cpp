#include <string>
#include <vector>
#define MAX 202
using namespace std;

bool visited[MAX];

void dfs(int n, int cur_computer, vector<vector<int>> computers)
{
    visited[cur_computer] = true;
    for(int i = 0 ; i < n ; i++)
    {
        int y = computers[cur_computer][i];
        if(y==1 && !visited[i]) 
            dfs(n, i, computers);
    }
}

int solution(int n, vector<vector<int>> computers) 
{
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            answer++;
            dfs(n, i, computers);
        }
    }
    return answer;
}