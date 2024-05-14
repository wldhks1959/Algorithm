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

// 갱신 
void update(int start, int end, int node, int index, ll dif)
{
	// 범위 밖
	if (index<start || index>end) return;
	// 범위 안에 있으면 내려가면서 다른 원소도 갱신
	tree[node] += dif;
	if (start == end) return;
	ll mid = (start + end) / 2;
	update(start, mid, node * 2, index, dif);
	update(mid + 1, end, node * 2 + 1, index, dif);
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

	int n, m, k, a, b;
	ll c;

	cin >> n >> m >> k;

	for (int i = 0, value; i < n; i++)
		cin >> arr[i];

	init(0, n - 1, 1);

	int iter = m + k;
	for (int i = 0; i < iter; i++)
	{
		cin >> a >> b >> c;

		// a가 1인 경우 b번째 수를 c로 변경
		if (a == 1)
		{
			ll tmp = c - arr[b - 1]; // tmp : 원값과 수정값의 차이 
			arr[b - 1] = c; // 값 수정 
			update(0, n - 1, 1, b - 1, tmp);
		}
		// a가 2인 경우 b번째 수 ~ c번째 수까지의 합을 출력
		if (a == 2)
		{
			cout << sum(0, n - 1, 1, b - 1, c - 1) << "\n";
		}
	}
	return 0;
}

/*
	n : 수의 개수
	m : 수의 변경이 일어나는 횟수
	k : 구간의 합을 구하는 횟수

	둘째 줄부터 n+1 번째 줄까지 n개의 수가 주어진다.

	n+2번째 줄부터 n+m+k+1번째 줄까지 세 개의 정수 a b c가 주어진다.
	if( a == 1 ) b번째 수를 c로 변경
	if( a == 2 ) b번째 수부터 c번째 수까지의 합을 구하여 출력

*/