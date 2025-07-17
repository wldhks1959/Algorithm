#include <iostream>
#include <string>
using namespace std;

int main() {
	int n; cin >> n;
	cin.ignore();
	string str;
	while (n--) {
		getline(cin,str);
		str[0] = toupper(str[0]);
		cout << str<<"\n";
	}
	return 0;
}