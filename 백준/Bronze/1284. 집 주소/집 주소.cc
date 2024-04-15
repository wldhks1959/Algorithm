#include <iostream>
#include <string>
using namespace std;

// 1 : 2cm
// 0 : 4cm
// else : 3cm
// blank : 1cm 
// 양쪽 여백 : 1+1
//

int main(void) {
	while (1) {
		string n; cin >> n;
		int blank = 2;
		int need = 0;
		if (n.compare("0") == 0) break;
		
		for (int i = 0; i < n.length(); i++) {
			if (n[i] == '1') need += 2;
			else if (n[i] == '0') need += 4;
			else need += 3;
		}
		need = need + blank + n.length() - 1;
		cout << need << "\n";
	}
	return 0;
}