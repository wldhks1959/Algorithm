#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int t; cin >> t;
	int arr[5] = { 0, };
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 5; j++)
			cin >> arr[j];
		
		sort(arr, arr + 5);
		if (arr[3] - arr[1] >= 4) cout << "KIN\n";
		else
		{
			cout << arr[1] + arr[2] + arr[3] << "\n";
		}
	}
	return 0;
}