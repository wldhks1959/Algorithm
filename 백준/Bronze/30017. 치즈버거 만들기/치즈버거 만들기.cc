#include <iostream>
using namespace std;

int main(void)
{
	int a, b; cin >> a >> b;
	if (a > b)
		cout << b * 2 + 1;
	else 
		cout << a * 2 - 1;
	return 0;
}