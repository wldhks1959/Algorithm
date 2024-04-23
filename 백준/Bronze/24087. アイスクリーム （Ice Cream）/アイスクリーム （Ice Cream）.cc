#include <iostream>
using namespace std;

int main() 
{

	int s, a, b; cin >> s >> a >> b;
	if (s - a > 0) cout << 250 + ((s - a - 1) / b + 1) * 100;
	else cout << 250;
	return 0;
}