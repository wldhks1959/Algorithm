#include <iostream>
using namespace std;

int fact(int a) {
	if (a == 0||a==1) {
		return 1;
	}
	else {
		return fact(a - 1) * a;
	}
}

int main(int argc, char* argv[])
{
	int N, K; cin >> N >> K;

	cout << fact(N) / (fact(K) * fact(N-K));

	return 0;
}