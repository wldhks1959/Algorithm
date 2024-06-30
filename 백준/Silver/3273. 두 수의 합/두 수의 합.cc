#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100002
int n, x, arr[MAX];

int main()
{
	//input
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	cin >> x;

	//sort
	sort(arr, arr + n);

	//solve
	int sum = 0;
	int left = 0, right = n - 1;
	while (left < right)
	{
		if (arr[left] + arr[right] == x)
		{
			sum += 1;
			left += 1;
			right -= 1;
		}
		else if (arr[left] + arr[right] > x)
			right -= 1;
		else 
			left += 1;
	}
	cout << sum;
	return 0;
}