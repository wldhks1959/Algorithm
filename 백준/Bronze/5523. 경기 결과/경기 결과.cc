#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	int a, b, aa=0,  bb=0;
	while (n--) {
		cin>>a >> b;
		if (a > b) aa++;
		else if (b > a) bb++;
		else continue;
	}
	cout << aa << " " << bb << "\n";
	return 0;
}