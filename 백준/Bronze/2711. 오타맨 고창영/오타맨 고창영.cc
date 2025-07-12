#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	int idx;
	string str;
	while (t--){
		cin >> idx >> str;
		str.erase(idx - 1, 1);
		cout << str << "\n";
	}
	return 0;
}