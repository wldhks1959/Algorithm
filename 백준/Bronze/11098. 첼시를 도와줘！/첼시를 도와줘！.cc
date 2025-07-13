#include <iostream>
#include <string>
#define MAX 102
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int p;
		cin >> p;
		
		// max
		int i_max_c = -1;
		string s_max_name = "";
		
		int c[MAX];
		string name[MAX];
		fill(c, c + MAX, 0);
		// string은 생성자에서 이미 빈 문자열로 초기화된다.
		for (int i = 0; i < p; i++) {
			cin >> c[i] >> name[i];
		}

		for (int i = 0; i < p; i++){
			if (i_max_c < c[i]) {
				i_max_c = c[i];
				s_max_name = name[i];
			}
		}
		cout << s_max_name << "\n";;
	}
	return 0;
}