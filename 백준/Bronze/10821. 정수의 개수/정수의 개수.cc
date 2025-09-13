#include <iostream>
using namespace std;

int main(void)
{
	string str; cin >> str;
	int cnt = 0;

	int idx = 0;
	while (str[idx]!='\0')
	{
		if (str[idx] == ',')
		{
			cnt++;
		}
		idx++;
	}
	cout << cnt + 1 << "\n";
	return 0;
}