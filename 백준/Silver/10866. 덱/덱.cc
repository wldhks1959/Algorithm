#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> dq; // deque 
	int N; cin >> N;
	string command; //명령어 
	int num; //push 연산 시, 큐에 넣을 정수 
	int result = 0; // 각 명령어의 결과 값 

	for (int i = 0; i < N; i++) {
		cin >> command;

		//push_front 
		if (command == "push_front") {
			cin >> num;
			dq.push_front(num);
		}
		//push_front 
		else if (command == "push_back") {
			cin >> num;
			dq.push_back(num);
		}
		//pop_front
		else if (command == "pop_front") {
			if (dq.size() == 0) {
				result = -1;
				cout << result << '\n';
			}
			else {
				result = dq.front();
				dq.pop_front();
				cout << result << '\n';
			}
		}
		//pop_back
		else if (command == "pop_back") {
			if (dq.size() == 0) {
				result = -1;
				cout << result << '\n';
			}
			else {
				result = dq.back();
				dq.pop_back();
				cout << result << '\n';
			}
		}
		//size
		else if (command == "size") {
			if (dq.size() == 0) {
				result = 0;
				cout << result << '\n';
			}
			else {
				result = dq.size();
				cout << result << '\n';
			}
		}
		//empty
		else if (command == "empty") {
			if (dq.size() == 0) {
				result = 1;
				cout << result << '\n';
			}
			else {
				result = 0;
				cout << result << '\n';
			}
		}
		//front
		else if (command == "front") {
			if (dq.size() == 0) {
				result = -1;
				cout << result << '\n';
			}
			else {
				result = dq.front();
				cout << result << '\n';
			}
		}
		//back
		else if (command == "back") {
			if (dq.size() == 0) {
				result = -1;
				cout << result << '\n';
			}
			else {
				result = dq.back();
				cout << result << '\n';
			}
		}

	}
}