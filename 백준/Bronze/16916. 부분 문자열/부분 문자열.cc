#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void) {
	string s, p;
	cin >> s >> p;

	if (strstr((char*)s.c_str(), (char*)p.c_str()) == NULL) {
		cout << 0 << '\n';
	}
	else cout << 1 << '\n';

	return 0;
}