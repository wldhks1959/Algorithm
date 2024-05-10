#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int t; cin >> t;
	for (int i = 0; i < t; i++)
	{
		int arr[5];	
		for (int j = 0; j < 5; j++)
		{
			cin>>arr[j];
		}
		sort(arr, arr + 5);
		cout <<"Case #" <<i+1<<": "<< arr[4] << "\n";
	}
	return 0;
}
