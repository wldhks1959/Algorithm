// 11723
#include<iostream>
#include<set>
using namespace std;

set<int> s;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;

	string str;
	int x;

	while (n--) 
	{
		cin >> str;
		if (str == "add") 
		{
			cin >> x;
			s.insert(x);
		}
		else if (str == "remove") 
		{
			cin >> x;
			s.erase(x);
		}
		else if (str == "check") 
		{
			cin >> x;
			if (s.find(x) == s.end()) cout << 0 << '\n';
			else cout << 1 << '\n';
		}
		else if (str == "toggle") 
		{
			cin >> x;
			if (s.find(x) == s.end()) s.insert(x);
			else s.erase(x);
		}

		if (str == "all") s = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

		if (str == "empty") 
		{
			set<int> tmp;
			s = tmp;
		}
	}
}