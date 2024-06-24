#include <iostream>
#include <set>
using namespace std;

int a_len, b_len, value;
set<int> s;

int main(void)
{
	cin >> a_len>>b_len; 
	for (int i = 0; i < a_len; i++)
	{
		cin >> value;
		s.insert(value);
	}

	for (int i = 0; i < b_len; i++)
	{
		cin >> value;
		if (s.find(value) == s.end()) s.insert(value);
		else s.erase(value);
	}
	cout << s.size();
	return 0;
}