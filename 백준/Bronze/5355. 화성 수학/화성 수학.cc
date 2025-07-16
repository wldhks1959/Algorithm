#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main(void) {
	size_t t;
	cin >> t;
	cin.ignore(); // 개행문자 제거

	while (t--){
		string line;
		// 빈 줄이 섞여 있을 수 있으므로 
		// 유효한 줄이 나올 때까지 반복
		do {
			if (!getline(cin, line)) break;
		} while (line.empty());
		
		// 한 줄을 토큰 단위로 분리
		istringstream iss(line);
		vector<string> tok;
		string s;
		while (iss >> s) {
			tok.push_back(s);
		}

		// 1번째 토큰은 숫자
		double num = stod(tok[0]);
		// 뒤에 연산자가 이어진다.
		for (size_t i = 1; i < (size_t)tok.size(); i++) {
			char op = tok[i][0];
			if (op == '@')      num *= 3;
			else if (op == '%') num += 5;
			else if (op == '#') num -= 7;
		}
		cout << fixed << setprecision(2) << num << "\n";
	}
	return 0;
}