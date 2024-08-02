#include <iostream>
#include <set>
using namespace std;
int main(void)
{
	int t, n; cin >> t;
	string str;
	set<string> s;
	for (int i = 0; i < t; i++)
	{
		s.clear();
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> str;
			s.insert(str);
		}
		cout << s.size() << "\n";
	}
	return 0;
		
}