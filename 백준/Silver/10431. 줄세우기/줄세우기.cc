#include <iostream>
#include <algorithm>
#define MAX 20
using namespace std;

int student[MAX];

int main(void) {
	int p, num, result = 0;
	cin >> p;

	for(size_t i = 0; i < p; i++) {
		cin >> num;
		result = 0;
		for (size_t j = 0; j < MAX; j++) {
			cin >> student[j];
		}
		for (size_t j = 0; j < MAX; j++) {
			for (size_t k = j; k < MAX; k++) {
				if(student[j] > student[k]) {
					result++;
				}
			}
		}
		cout << num << " " << result << "\n";
	}
	return 0;
}