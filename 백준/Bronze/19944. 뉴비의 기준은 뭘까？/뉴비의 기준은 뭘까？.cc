#include <iostream>
using namespace std;

int main(void)
{
	long long int n, m;
	cin >> n >> m;

	if (m <= 2)cout << "NEWBIE!";
	else if (m <= n) cout << "OLDBIE!";
	else cout << "TLE!";

	return 0;
}