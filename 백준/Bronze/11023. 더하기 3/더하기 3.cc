#include <iostream>
using namespace std;

int main(void) {
	int num, sum = 0;
	while (cin >> num) {
		sum += num;
	}
	cout << sum << "\n";
	return 0;
}