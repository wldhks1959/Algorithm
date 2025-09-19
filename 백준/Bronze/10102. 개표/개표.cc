#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n;
	string str;
	cin >> n >> str;
	
	int a=0, b=0;

	for (size_t i = 0; i < n; i++)
	{
		if (str[i] == 'A') a++;
		else if (str[i] == 'B') b++;
	}

	if (a == b)
	{
		cout << "Tie\n";
	}
	else 
	{
		if (a > b) cout << "A\n";
		else cout << "B\n";
	}
	return 0;
}