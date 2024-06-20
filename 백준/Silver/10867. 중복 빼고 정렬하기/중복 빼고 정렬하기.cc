#include <iostream>
#include <set>
using namespace std;

int n;
set<int> s;

int main(void)
{
	cin >> n;
	for (int i = 0, value; i < n; i++)
	{
		cin >> value;
		s.insert(value);
	}
	
	for (const auto& str : s) cout << str << " ";
	return 0;
}