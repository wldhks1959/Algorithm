#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main(void) {
	int n;
	cin >> n;
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
	while (n--) {
		Point p;
		cin >> p.x >> p.y;
		if (p.x > 0 && p.y > 0) {
			q1++;
		} else if (p.x < 0 && p.y > 0) {
			q2++;
		} else if (p.x < 0 && p.y < 0) {
			q3++;
		} else if (p.x > 0 && p.y < 0) {
			q4++;
		}
		else {
			axis++;
		}
	}

	cout << "Q1: " << q1 << "\n";
	cout << "Q2: " << q2 << "\n";
	cout << "Q3: " << q3 << "\n";
	cout << "Q4: " << q4 << "\n";
	cout << "AXIS: " << axis << "\n";
	return 0;

}