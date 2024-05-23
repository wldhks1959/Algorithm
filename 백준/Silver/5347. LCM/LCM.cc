#include <iostream>
using namespace std; 
typedef unsigned long long ull;

int t;
ull a, b;

int main(void)
{
	cin >> t;
	for (int j = 0; j < t; j++)
	{
		cin >> a >> b;
		ull small = (a < b ? a : b);

		for (ull i = small; i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				cout << ( a * b ) / i <<"\n";
				break;
			}
		}
	}
	return 0;
}