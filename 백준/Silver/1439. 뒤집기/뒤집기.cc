#include <iostream>
using namespace std;

int main(void)
{
	string str; cin >> str;
	int res = 0;
	bool check = false;
	for (int i = 0; i < str.size(); i++)
		if (str[i] != str[i + 1]) res++;

	if (!res) cout << res;
	else cout << res / 2;

	return 0;
}