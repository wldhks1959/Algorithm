#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a, b, c;
	while (1) {
		int temp = 0;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			return 0;

		if (a > b) {
			temp = b;
			b = a;
			a = temp;
		}

		if (b > c) {
			temp = c;
			c = b;
			b = temp;
		}
		if (c * c == a * a + b * b)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}