#include <iostream>
#include <limits.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int arr[7];
		int min_arr = INT_MAX;
		int sum = 0;
		for (size_t i = 0; i < 7; ++i) {
			cin >> arr[i];
			if (arr[i] % 2 == 0) {
				sum += arr[i];
				if (arr[i] < min_arr) {
					min_arr = arr[i];
				}
			}
		}
		cout << sum << " " << min_arr << "\n";
	}
	return 0;
}