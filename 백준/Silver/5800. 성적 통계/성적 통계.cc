// 5800
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 최대 점수, 최소 점수, 점수 차이 

int main(void)
{
	int k, index = 1;
	
	cin >> k;
	
	for (int i = 0; i < k; i++)
	{
		int n; cin >> n;
		vector<int> arr(n);
		for (int j = 0; j < n; j++)
			cin >> arr[j];
		sort(arr.begin(), arr.end(), greater<int>());
		
		int MIN = arr[n - 1], MAX = arr[0];
		int gap=0;
		
		for (int j = 1; j < n; j++)
			gap = max(gap, arr[j - 1] - arr[j]);

		cout << "Class " << index<<"\n"; index++;
		cout << "Max " << MAX << ", Min " << MIN << ", Largest gap " << gap<<"\n";
	}
	return 0;
}