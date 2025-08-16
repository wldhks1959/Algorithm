#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	int t; cin >> t;
	string answer;
	string str1, str2;
	while (t--) {
		answer = "";
		cin >> str1 >> str2;
		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());
		if (str1.compare(str2)==0) {
			answer = "Possible";
		} else{
			answer = "Impossible";
		}
		cout << answer <<"\n";
	}
	return 0;
}
