#include <iostream>
#include <map>
using namespace std;

int main() 
{
	int n; cin >> n;
	string name, state;
	map <string, string, greater<string>> log;
	
	for (int i = 0; i < n; ++i) 
	{
		cin >> name >> state;
		log[name] = state;
	}

	map<string, string>::iterator it;
	for (it = log.begin(); it != log.end(); it++) 
		if (it->second == "enter") cout << it->first << "\n";

	return 0;
}