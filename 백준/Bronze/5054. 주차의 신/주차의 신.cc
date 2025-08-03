#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> v(n);
		for (size_t i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());

		int sum = 0;
		for (size_t i = 0; i < n-1; i++) {
			sum += (abs(v[i] - v[i + 1]));
		}
		sum += abs(v[n-1] - v[0]);
		cout << sum << "\n";
	}
	return 0; 
}