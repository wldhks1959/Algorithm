
//쉽게 말해서 해쉬테이블 쓰는데 
//둘의 차이의 개수를 세는 문제이다.

#include <iostream>
#include <string>
using namespace std;

int main(void){
	string str1, str2;
	cin >> str1 >> str2;
	
	int hash1[26] = {};
	int hash2[26] = {};

	for (int i = 0; i < str1.length(); i++) {
		hash1[str1[i] - 'a']++;
	}

	for (int i = 0; i < str2.length(); i++) {
		hash2[str2[i] - 'a']++;
	}

	int ans = 0;
	for (int i = 0; i < 26; i++) {
		if (hash1[i] != hash2[i]) {
			// 두 번째 문자열의 알파벳 수가 더 많아서 단순히 차이를 계산하면 음수가 나올 수 있으므로 절댓값 계산이 필요하다.
			ans += abs(hash1[i] - hash2[i]);
		}
	}
	cout << ans;
	return 0;
}