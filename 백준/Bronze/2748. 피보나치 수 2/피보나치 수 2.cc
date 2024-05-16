#include <iostream>
#define MAX 100
typedef long long ll;
using namespace std;

ll f[MAX] = { 0,1, };

ll fibo(int n)
{
	if (n == 1 || n == 2) 
		return 1;
	else if(f[n]==0)
		f[n] = fibo(n-1)+fibo(n-2);
	return f[n];
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;

	cout << fibo(n) ;
	return 0;
}