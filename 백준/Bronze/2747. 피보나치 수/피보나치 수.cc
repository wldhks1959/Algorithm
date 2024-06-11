#include <iostream>
using namespace std;
#define MAX 45
int arr[MAX];

int fibo(int n)
{
	if (n ==1 || n==2) return 1;
	if (arr[n] != 0) return arr[n];
	return arr[n] = fibo(n - 2) + fibo(n - 1);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int res = fibo(n);
	cout << res;
	return 0;
}