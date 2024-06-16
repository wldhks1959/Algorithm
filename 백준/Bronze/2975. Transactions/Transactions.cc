#include <iostream>
using namespace std;

int a, b, res;
char c;

int main(void)
{
	while (1)
	{
		cin >> a >> c >> b;
		if (a==0 && c == 'W' && b==0)
		{
			break;
		}
		if (c == 'W')
		{
			res = a - b;
			if (res<-200) cout << "Not allowed\n";
			else cout << res << "\n";
		}
		else
		{
			res = a + b;
			cout << res << "\n";
		}
	}
	return 0;
}