#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main(void) 
{
	for (int i = 1; i < 21; i++) v.push_back(i);

	for (int i = 0; i < 10; i++)
	{
		int a, b; cin >> a >> b;
		reverse(v.begin() + a - 1, v.begin() + b);
	}

	for (auto& i : v) cout << i << " ";

	return 0;
}