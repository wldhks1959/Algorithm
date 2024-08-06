#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n; cin >> n;

	map<string, int> m;

	for (int i = 0; i < n; i++)
	{
		string str; cin >> str;
		string extension = str.substr(str.find('.') + 1);
		m[extension]++;
	}

	for (auto a : m)
		cout << a.first << " " << a.second << "\n";
	return 0;
}