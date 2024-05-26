#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 12

int main(void)
{
	int n, k; cin >> n >> k;
	int arr[MAX], tmp;
	int cnt = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr + n, greater<>());
	/*for (int i = 0; i < n; i++)
		cout << arr[i] << " ";*/
	for (int i = 0; i < n; i++)
	{
		if (k >= arr[i])
		{
			tmp = k / arr[i];
			k %= arr[i];
			cnt += tmp;
		}
		else
		{
			continue;
		}
	}
	cout << cnt;

	return 0;
}