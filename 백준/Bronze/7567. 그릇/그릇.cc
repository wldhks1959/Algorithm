#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int ans = 10;
	for (int i = 1; i < input.size(); i++)
	{
		if (input[i] != input[i - 1])
		{
			ans += 10;
		}
		else
		{
			ans += 5;
		}
	}
	cout << ans << "\n";
	return 0;
}