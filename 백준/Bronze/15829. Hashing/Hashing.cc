#include <iostream>
#include <cmath>

using namespace std;

const long long N = 1234567891;

int main(void) {
	int n;
	string str;
	cin >> n >> str;

	long long sum = 0;
	long long r = 1; // 31^i % N

	for(size_t i= 0; i < str.size(); ++i) {
		long long num = str[i] - 'a' + 1;
		sum = (sum + num * r) % N;
		r = (r * 31) % N;
	}
	cout << sum << "\n";
	return 0;
}