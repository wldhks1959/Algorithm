#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;

	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < n; j++) {
			if (i % 2 == 0) {
				cout << "* ";
			} else {
				cout << " *";
			}
		}
		cout << "\n";
	}
	return 0;
}