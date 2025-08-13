#include <iostream>
using namespace std;

int main(void) {

	int n, k, y;
	bool flag;
	int male[6], female[6];
	int room = 0;
	cin >> n >> k;

	for (size_t i = 0; i < 6; i++) {
		male[i] = 0;
		female[i] = 0;
	}

	while (n--) {
		cin >> flag >> y;
		if (flag) male[y - 1]++;
		else female[y - 1]++;
	}

	for (size_t i = 0; i < 6; i++) {
		int m = male[i] / k;
		int f = female[i] / k;
		if ((male[i] % k) != 0) m++;
		if ((female[i] % k) != 0) f++;

		room += m + f;
	}
	cout << room << "\n";
	return 0;
}