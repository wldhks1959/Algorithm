#include <iostream>
#include <string>
#include <map>
using namespace std;
#define MAX 100002

map<string, int> num;
string name[MAX];

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	string str;
	for (int i = 1; i <= n; i++) 
	{
		cin >> str;
		num.insert({ str, i });
		name[i] = str;
	}
	
	for (int i = 1; i <= m; i++) 
	{
		cin >> str;
		if (isdigit(str[0])) 
		{
			cout << name[stoi(str)] << '\n';
		}
		else 
		{
			cout << num.find(str)->second << '\n';
		}
	}

	return 0;
}