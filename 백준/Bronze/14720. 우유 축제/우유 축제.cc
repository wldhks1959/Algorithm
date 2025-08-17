#include <iostream>
using namespace std;

int main(void) {
	// 딸기 -> 초코 -> 바나나 -> 딸기	
	// 딸기, 초코, 바나나 = 0 1 2 

	int n;
	cin >> n;

	int ret = 0;
	int* arr = (int*)malloc(sizeof(int) * n);
	for (size_t i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int expect = 0;
	for (size_t i = 0; i < n; i++) {
		if (arr[i] == expect) {
			ret++;
			expect = (expect + 1) % 3;
		}
	}
	cout << ret << "\n";
	free(arr);
	return 0;
}