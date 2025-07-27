#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	cin >> str;
	int JOI=0, IOI=0;

	for (size_t i = 0; i < str.length()-2; i++) {
		if (str.substr(i, 3) == "JOI") JOI++;
		else if (str.substr(i, 3) == "IOI") IOI++;
	}
	cout << JOI << "\n" << IOI;
	return 0;
}