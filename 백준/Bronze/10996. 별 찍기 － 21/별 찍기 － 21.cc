#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n; cin >> n;
	for (int i = 1; i <= n*2; i++) {
		for (int j = 1; j <= n; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) printf("*");
				else printf(" ");
			}
			else {
				if (j % 2 == 0) printf(" ");
				else printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}