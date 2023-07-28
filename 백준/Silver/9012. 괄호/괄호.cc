#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(int argc, char*argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie();

	int N; cin >> N;

	while (N > 0) {
		N--;
		string input; cin >> input;
		stack<char> st;
		string result = "YES";

		for (int i = 0; i < input.length(); i++) {
			//'('는 스택에 저장
			if (input[i] == '(') {
				st.push(input[i]);
			}
			//')'가 나오면 스택에 저장된 '('와 짝이 맞는지 확인하고 pop
			else if (!st.empty() && input[i] == ')' && st.top() == '(') {
				st.pop();
			}
			//위의 경우를 제외하고는 모두 vps가 아닌 상황이므로 종료(break)
			else {
				result = "NO";
				break;
			}
		}
		if (!st.empty()) result = "NO";

		cout << result << endl;
	}
	return 0;
}