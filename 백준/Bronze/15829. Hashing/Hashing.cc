#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int n;
	string str;
	cin >> n >> str;

	long long sum = 0;

	for(size_t i= 0; i < str.size(); ++i) {
		long long num = str[i] - 'a' + 1;
		sum += num * pow(31, i);
	}
	cout << sum % 1234567891 << "\n";
	return 0;
}