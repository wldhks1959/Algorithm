#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n; cin >> n;

	vector<int> v1, v2;
	for (int i = 1; i <= n; i++) {
		v1.push_back(i);
	}
	while (v1.size() != 1) {
		v2.clear();
		for (int i = 1; i < v1.size(); i += 2) 
			v2.push_back(v1[i]);
		v1 = v2;
	}
	cout << v1.front();
	return 0;
}