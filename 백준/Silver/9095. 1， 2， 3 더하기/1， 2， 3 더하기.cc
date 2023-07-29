#include <iostream>
using namespace std;

int result(int n) {
	if (n >= 4) {
		return result(n - 1) + result(n - 2) + result(n - 3);
	}
	else if (n == 3) {
		return 4;
	}
	else if (n == 2) {
		return 2;
	}
	else if (n == 1) {
		return 1;
	}
}
int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int num;
	int T; cin >> T;
	while (T > 0) {
		T--;
		cin >> num;
		cout << result(num)<<'\n';
	}
}