#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue<int> pq;
    queue<pair<int,int>> q;
    for(auto c: priorities) pq.push(c);
    for(int i=0;i<priorities.size();i++) q.push({priorities[i], i});
    int t=1;
    while(!q.empty()){
        if(q.front().first==pq.top()){
            if(q.front().second==location) return t;
            q.pop();
            pq.pop();
            t++;
        }else{
            pair<int,int> tmp = q.front();
            q.push(tmp);
            q.pop();
        }
    }
  
    return answer;
}