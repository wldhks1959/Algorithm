#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int g_n; // global n

bool compare(const string &a, const string &b)
{
    if(a[g_n]==b[g_n])
        return a < b; // 사전 순 비교
    return a[g_n] < b[g_n]; // n번째 문자 기준 정렬
}

vector<string> solution(vector<string> strings, int n) 
{
    g_n = n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}