#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main(void)
{
    int n, m; // n: 나무 수, m: 필요 나무 길이 
    cin >> n >> m;
    vector<int> v;
    int maxLen = 0; // 가장 높은 나무의 높이

    for (int i = 0, value; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
        maxLen = max(value, maxLen); // 최대 나무 높이 업데이트
    }

    int start = 0, end = maxLen, mid;
    ll treeSum; // 절단 후 남은 나무 길이의 합 
    int standard = 0; // 절단기 높이 

    // 이분 탐색
    while (start <= end)
    {
        mid = (start + end) / 2;
        treeSum = 0;
        for (size_t i = 0; i < v.size(); i++) 
        { // 나무 길이에서 절단기 높이를 뺄 때 양수일 때만 sum
            treeSum += max(0, v[i] - mid);
        }
        if (treeSum >= m)
        {
            standard = mid;  // 가능한 더 큰 mid 저장
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    cout << standard;

    return 0;
}