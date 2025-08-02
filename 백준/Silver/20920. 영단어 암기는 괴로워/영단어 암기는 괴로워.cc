#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
int main(void) {
	
	int n, m;
	cin >> n >> m;

	map<string, int> mp;
	
	string word;
	while (n--) {
		cin >> word;

		if (word.size() >= m) {
			mp[word]++;
		}
	}

	vector<pair<string, int>> v(mp.begin(), mp.end());
	sort(v.begin(), v.end(), [](pair<string, int> const &l, pair<string, int> const &r) {
		if (l.second != r.second) // 빈도 순
			return l.second > r.second;
		else if (l.first.length() != r.first.length()) // 길이 순
			return l.first.length() > r.first.length();
		else // 사전 순
			return l.first < r.first;
	});

	for (auto& val : v) {
		cout << val.first << "\n";
	}
	return 0;
}