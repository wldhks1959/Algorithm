#include <iostream>
using namespace std;
// define MAX E:15 S:28 M:19
int E, S, M, year=1;

int main(void)
{
	cin >> E >> S >> M;
	while (1)
	{
		if ((year - E) % 15 == 0 && 
			(year - S) % 28 == 0 && 
			(year - M) % 19 == 0) break;
		year++;
	}
	cout << year;
}
