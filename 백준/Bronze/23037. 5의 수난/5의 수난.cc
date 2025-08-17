#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long ull;
int main(void) {
	ull n;
	cin >> n;

	ull sum = 0;
	while (n > 0) {
		int tmp = n % 10;
		n /= 10;
		sum += pow(tmp, 5);
	}
	cout << sum << "\n";
	return 0;
}
