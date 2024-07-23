// 유클리드 호제법 
// O(logN)의 시간복잡도 
/* 
	a를 b로 나눈 나머지를 r이라고 할 때, (단 a > b)
	a와 b의 최대 공약수는 b와 r의 최대 공약수와 같다는 성질을 이용 
*/

#include <iostream>
using namespace std;
#define MAX 102
typedef long long ll;
ll arr[MAX] = { 0, };
ll sum[MAX] = { 0, };

int gcd(ll  x, ll y)
{
	if (x % y == 0) 
		return y;
	else 
		return gcd(y, x % y);
}

int main(void)
{
	int t; cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n; cin >> n;

		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}
		
		for (int j = 0; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum[i] += gcd(arr[j], arr[k]);
			}
		}
	}

	for (int i = 0; i < t; i++)
	{
		cout << sum[i] << "\n";
	}
	return 0;
}