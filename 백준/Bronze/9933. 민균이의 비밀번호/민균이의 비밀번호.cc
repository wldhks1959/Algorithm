#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string st, ans;

int main() {
	cin >> n;
	
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		st = v[i];
		reverse(st.begin(), st.end());

		if (st == *find(v.begin(), v.end(), st)) {
			ans = st;
			break;
		}
	}
	int asz = ans.size();
	cout << asz << ' ' << ans[asz / 2];
	return 0;
}