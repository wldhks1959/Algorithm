#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int i, num, res = 0;
    vector<int> v;
    int n; cin >> n;
    
	for (i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end(), greater<int>());
	for (i = 0; i < v.size(); i++)
	{
		if ((i + 1) % 3 == 0) continue;
		res += v[i];
	}
	cout << res << "\n";
	return 0;
}