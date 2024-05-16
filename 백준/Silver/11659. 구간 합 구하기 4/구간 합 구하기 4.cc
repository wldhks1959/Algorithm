#include <iostream>
#define MAX 1000002

typedef long long ll;
using namespace std;

ll arr[MAX]; // 원 배열 
ll tree[MAX * 4]; // 100만과 가장 가까운 제곱 수 1000에 2를 곱함.

// 초기화
ll init(int start, int end, int node)
{
	if (start == end) return tree[node] = arr[start];
	ll mid = (start + end) / 2;
	return tree[node] = init(start, mid, node * 2)
		+ init(mid + 1, end, node * 2 + 1);
}

// 합 
ll sum(int start, int end, int node, int left, int right)
{
	// 범위 밖
	if (left > end || right < start) return 0;
	// 범위 안 
	if (left <= start && right >= end) return tree[node];
	ll mid = (start + end) / 2;
	return sum(start, mid, node * 2, left, right)
		+ sum(mid + 1, end, node * 2 + 1, left, right);
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n, m, i, j;
	cin >> n >> m;
	for (int k = 0 ; k < n; k++)
		cin >> arr[k];
	ll res;

	init(0, n - 1, 1);

	for (int k = 0; k < m; k++)
	{
		cin >> i >> j;
		// b번째 수 ~ c번째 수까지의 합을 출력
		cout << sum(0, n - 1, 1, i-1, j-1) << "\n";
	}
	return 0;
}