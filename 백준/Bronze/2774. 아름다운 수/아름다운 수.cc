#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		bool num[10] = { false };
		fill(num, num + 10, false);
		int tmp, cnt = 0;
		while (n > 0) {
			tmp = n % 10;
			if (num[tmp] == false) {
				num[tmp] = true;
				cnt++;
			}
			n /= 10;
		}
		cout << cnt << "\n";
	}
	return 0;
}