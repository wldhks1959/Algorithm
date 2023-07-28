#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char* argv[])
{
	queue<int> q; // 큐 
	int N; cin >> N;
	string command; //명령어 
	int num; //push 연산 시, 큐에 넣을 정수 
	int result = 0; // 각 명령어의 결과 값 

	for (int i = 0; i < N; i++) {
		cin >> command;

		//push 
		if (command == "push") {
			cin >> num;
			q.push(num);
		}
		//pop
		else if(command=="pop"){
			if (q.size() == 0) {
				result = -1;
				cout << result << '\n';
			}
			else {
				result = q.front();
				q.pop();
				cout << result << '\n';
			}
		}
		//size
		else if (command == "size") {
			if (q.size() == 0) {
				result = 0;
				cout << result << '\n';
			}
			else {
				result = q.size();
				cout << result << '\n';
			}
		}
		//empty
		else if (command == "empty") {
			if (q.size() == 0) {
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
			if (q.size() == 0) {
				result = -1;
				cout << result << '\n';
			}
			else {
				result = q.front();
				cout << result << '\n';
			}
		}
		//back
		else if (command == "back") {
			if (q.size() == 0) {
				result = -1;
				cout << result << '\n';
			}
			else {
				result = q.back();
				cout << result << '\n';
			}
		}

	}
}