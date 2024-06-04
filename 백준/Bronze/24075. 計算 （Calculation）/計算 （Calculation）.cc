#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(void)
{
	int a, b;
	cin >> a>>b;
	cout << max(a + b, a-b)<<"\n";
	cout << min(a + b, a - b);
	return 0;
}