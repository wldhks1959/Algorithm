#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int arr[3];
	for (size_t i = 0; i < 3; i++)
		cin >> arr[i];
	sort(arr, arr + 3);
	int a, b, c;
	a = arr[0];
	b = arr[1];
	c = arr[2];

	string str;
	cin >> str;
	size_t sz  = str.size();
	size_t idx = 0;
	while(sz--) {
		if (str[idx] == 'A') {
			cout << a << " ";
		}
		if (str[idx] == 'B') {
			cout << b << " ";
		}
		if (str[idx] == 'C') {
			cout << c << " ";
		}
		idx++;
	}
	return 0;
}

// A < B < C 