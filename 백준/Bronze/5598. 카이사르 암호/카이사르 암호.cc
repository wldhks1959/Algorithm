#include <iostream>
#include <string>
using namespace std;

char convert2(char c) {
	if (c >= 'A' && c <= 'Z') {
		return char(((c - 'A') - 3 + 26) % 26 + 'A');
	}
	return c;
}

int main(){
	string s;
	cin >> s;

	for(size_t i=0;i<s.length();++i){
		s[i] = convert2(s[i]);
	}
	cout << s;
	return 0;
}