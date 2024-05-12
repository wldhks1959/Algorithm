#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100002
int arr[MAX];
int n, m, num;

void search(int num) {
	int start = 0;
	int end = n - 1;
	int mid;

	while (start <= end) {
		mid = (start + end) / 2;

		if (arr[mid] == num) {
			cout << 1 << '\n';
			return;
		}
		else if (arr[mid] < num) {
			start = mid + 1;
		}
		else if (arr[mid] > num) {
			end = mid - 1;
		}
	}
	cout << 0 << '\n';
	return;
}

int main(int argc, char* arg[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	bool flag = false;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		search(num);
	}

	return 0;
}