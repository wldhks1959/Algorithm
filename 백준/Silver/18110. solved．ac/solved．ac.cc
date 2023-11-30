#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	//var
	int n, res = 0; cin >> n;
	vector<int> level(n);

	if (n == 0)
	{
		cout << res;
		return 0;
	}
	
	for (int i = 0; i < n; i++) cin >> level[i];
	
	sort(level.begin(), level.end());

	// 절사평균
	int idx = round(n * 0.15);
	double sum = 0;

	// 절사평균으로 제외하고 난 뒤 의견들 총합 계산
	for (int i = idx; i < n - idx; i++)
		sum += level[i];

	res = round(sum / (n - idx * 2));

	cout << res;

	return 0;
}