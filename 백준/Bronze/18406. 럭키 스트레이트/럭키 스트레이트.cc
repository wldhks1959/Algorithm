#include <iostream>
#include <string>

using namespace std;

// 점수 : N 
// 99,99/ 9,999

int main(void) {
	int n; 
	cin >> n;

	size_t len = to_string(n).length();
	// cout << len << "\n";
	
	int num1, num2;
	num1 = stoi(to_string(n).substr(0, len / 2));
	num2 = stoi(to_string(n).substr(len/2, len/2));

	int sum1=0, sum2 = 0;
	while (num1 > 0) {
		sum1 += num1 % 10;
		num1 /= 10;
	}
	
	while (num2 > 0) {
		sum2 += num2 % 10;
		num2 /= 10;
	}
	
	cout << (sum1 == sum2 ? "LUCKY" : "READY");
	return 0;
}