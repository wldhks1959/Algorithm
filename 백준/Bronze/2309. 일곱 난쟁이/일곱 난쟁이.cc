#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n = 9, arr[10], i = 0, sum=0;
	int cnt = 0;
	while (n>0) {
		cin >> arr[i];
		sum += arr[i];
		i++;  n--;
	}
	sort(arr, arr + 9);

	for (int j = 0; j < 8; j++) {
		for (int k = j + 1; k < 9; k++) {
			if (sum - (arr[j] + arr[k]) == 100) { // 100되는 경우의 j와 k를 빼고 출력한다.
				for (int l = 0; l < 9; l++) {
					if (l != j && l != k) {
						cout << arr[l] << "\n";
						cnt++;
						if (cnt == 7)  return 0;
					}
				}
			}
		}
	}
}