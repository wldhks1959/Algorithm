#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
	string s1,s2; cin >> s1;
	int t, cnt=0; cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> s2;
		if (strncmp(s1.c_str(), s2.c_str(), 5) == 0) cnt++;
	}
	cout << cnt;
	return 0;
}