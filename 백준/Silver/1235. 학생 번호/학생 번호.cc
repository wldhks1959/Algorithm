#include <iostream>
#include <map>
#include <vector>
using namespace std; 

int n, len, k;

int solution(int n)
{
	vector<string> id, newId;
	id = newId = vector<string>(n);
	for (auto& a : id) cin >> a;

	len = id[0].size();

	while (true)
	{
		map<string, bool> m;
		bool isFind = true;
		
		k++;
		for (int i = 0; i < id.size(); i++)
		{
			newId[i] += id[i][len - k];

			if (m[newId[i]]) isFind = false;
			m[newId[i]] = true;
		}
		if (isFind) break;
	}
	return k;
}

int main(void)
{
	cin >> n;
	cout << solution(n);
	return 0;
}