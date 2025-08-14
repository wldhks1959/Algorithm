#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n; cin >> n;
	int *nums = (int*)malloc(sizeof(int)*n);
	for (size_t i = 0; i < n; i++) {
		cin >> nums[i];
	}
	sort(nums, nums + n);

	int i_max_n, i_min_n;
	i_max_n = nums[n - 1];
	i_min_n = nums[0];

	cout << i_max_n - i_min_n << "\n";
	free(nums);
	return 0;
}