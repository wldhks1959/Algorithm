#include <iostream>
#include <algorithm>
#define MAX 1002
using namespace std;

int n, arr[MAX], dp[MAX] = {0, };

int main(void)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1; // 초기 증가 부분 수열 길이 : 1 
		for (int j = 0; j < n; j++)
		{
			if (arr[i] > arr[j]) // 현재값이 이전보다 크다면?
				dp[i] = max(dp[i], dp[j]+1);
		}
		mx = max(mx, dp[i]); // 최댓값 갱신 
	}
	cout << mx; // 결과 출력
	return 0;
}