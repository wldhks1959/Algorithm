#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1002
int arr[MAX];

int main(void)
{
	// 같은 눈 3개 : 10000 + 같은 눈 * 1000 
	// 같은 눈 2개 : 1000 + 같은 눈 * 100
	// 모두 다른 눈 : 그 중 가장 큰 눈 * 100 

	int n;
	cin >> n;
	int x1, x2, x3;
	for (int i = 0; i < n; i++)
	{
		cin >> x1 >> x2 >> x3;
		if (x1 == x2 && x2 == x3)
			arr[i] = 10000 + x1 * 1000;
		else if (x1 == x2 || x1 == x3)
			arr[i] = 1000 + x1 * 100;
		else if (x2 == x3)
			arr[i] = 1000 + x2 * 100;
		else
		{
			int big = max(x1, max(x2, x3));
			arr[i] = big * 100;
		}
	}
	sort(arr, arr + n, greater<int>());
	cout << arr[0];
	return 0;
}