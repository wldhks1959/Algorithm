#include <iostream>
using namespace std;
#define MAX 100002

int arr[MAX];

int main(void)
{
	int n, k, ans = 0; cin >> n >> k;
	for (int i = 2; i <= n; i++)
	{
		if (arr[i]) continue; // 소수 아니면 스킵 
		for (int j = i; j <= n; j += i)
			arr[j] = max(arr[j], i); // j의 최대 소인수를 i로 갱신
	}
	for (int i = 1; i <= n; i++)
		if (arr[i] <= k) ans++;
	cout << ans;
	return 0;
}
 // 1 2 3 4 5 6 7 8 9 10  
 // x 2 3 2 5 3 7 2 3 5