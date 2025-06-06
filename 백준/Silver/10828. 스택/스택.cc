#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;      // 스택
	int N; cin >> N;
	string command;    // 명령어
	int num;           // push 연산 시, 스택에 넣을 정수
	int result = 0;    // 각 명령어의 결과값

	for (int i = 0; i < N; i++) {
		cin >> command;

		//push
		if (command == "push") {
			cin >> num;
			s.push(num);
		}

		//pop
		//스택이 비어있으면 -1을 출력, 그 외에는 top 값을 출력 후 pop
		else if (command == "pop") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
				s.pop();
			}
		}

		//size
		else if (command == "size") {
			cout << s.size() << endl;
		}

		//empty
		//size함수를 통해, size=0이면 스택이 빈 것이므로 1, 아니면 0 출력     
		else if (command == "empty") {
			if (s.size() == 0) {
				result = 1;
				cout << result << endl;
			}
			else {
				result = 0;
				cout << result << endl;
			}
		}

		//top
		//스택이 비어있으면 -1을 출력, 그 외에는 top 값을 출력
		else if (command == "top") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
			}
		}
	}
	return 0;
}