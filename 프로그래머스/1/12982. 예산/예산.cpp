#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) 
{
    sort(d.begin(), d.end());
    
    int ans=0;
    int cur_sum = 0;
    
    // 정렬된 벡터를 순회하며 예산 내에서 최대한 많은 물품을 구매한다.
    for(int i=0;i<d.size();i++)
    {
        if(cur_sum + d[i] <= budget)
        {
            cur_sum += d[i];
            ans++;
        }
        else
        {
            break;
        }
    }
    return ans;
}

