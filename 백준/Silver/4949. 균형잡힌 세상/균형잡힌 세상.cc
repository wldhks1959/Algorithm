//4949 균형잡힌 세상
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int args, char*argv[])
{
	cin.tie(0)->ios_base::sync_with_stdio(0);
	
	//while 시작
	while (1){
		string input; getline(cin, input);
		if (input == ".") break;

		stack<char> s;
		bool flag = 0;
		// check
		for (int i = 0; i < input.length(); i++){ // for
			char c = input[i];
			if (c == '(' || c == '[') s.push(c);
			else if (c == ')'){
				if (!s.empty() && s.top() == '(') s.pop();
				else{
					flag = 1; break;
				}
			}
			else if (c == ']'){
				if (!s.empty() && s.top() == '[') s.pop();
				else{
					flag = 1; break;
				}
			}
		}// for
		if (flag == 0 && s.empty()) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}// while 끝
	return 0;
}