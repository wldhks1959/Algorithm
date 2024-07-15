#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10002
typedef unsigned int ui;
ui k, n, arr[MAX], res;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	cin >> k >> n;

	ui Max = 0;

	for (int i = 0; i < k; i++)
	{
		cin >> arr[i]; 
		Max = max(Max, arr[i]);
	}

	ui start = 1, end = Max;

	while (start <= end)
	{
		ui mid = (start + end) / 2;

		// 몫의 합을 저장
		ui cur = 0;
		
		for (int i = 0; i < k; i++)
			cur += arr[i] / mid;

		if (cur >= n)
		{
			start = mid + 1;
			res = max(res, mid); // n개를 만들 수 있을 때, 답을 더 큰 값으로 갱신 
		}
		else
		{
			end = mid - 1;
		}
	}
	cout << res << "\n";
	return 0;
}