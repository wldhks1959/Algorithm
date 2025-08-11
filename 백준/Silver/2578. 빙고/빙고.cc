#include <iostream>
using namespace std;
#define MAX 5

int cheolsu[MAX][MAX];
int moderator;

bool marked[MAX][MAX] = { false }; // 철수 빙고 맵

void logic(int n) {
	for (size_t i = 0; i < MAX; i++) {
		for (size_t j = 0; j < MAX; j++) {
			// 철수 빙고에 있다면
			if (cheolsu[i][j] == n) {
				marked[i][j] = true;
				break;
			}
		}
	}
}

int cntBingo() {
	int cnt = 0;
	// 행
	for (size_t i = 0; i < MAX; i++) {
		bool ok = true;
		for (size_t j = 0; j < MAX; j++) {
			if (!marked[i][j]) { ok = false; break; }
		}
		if (ok) ++cnt;
	}

	for (size_t j = 0; j < MAX; j++) {
		bool ok = true;
		for (size_t i = 0; i < MAX; i++) {
			if (!marked[i][j]) { ok = false; break; }
		}
		if (ok) ++cnt;
	}

	// 대각선1
	bool diag1 = true;
	for (size_t i = 0; i < MAX; i++) {
		if (!marked[i][i]) { diag1 = false; break; }
	}
	if (diag1) ++cnt;

	// 대각선2
	bool diag2 = true;
	for (size_t i = 0; i < MAX; i++) {
		if (!marked[i][MAX-1-i]) { diag2 = false; break; }
	}
	if (diag2) ++cnt;

	return cnt;
}

int main(void) {
	for (size_t i = 0; i < MAX; i++) {
		for (size_t j = 0; j < MAX; j++) {
			cin >> cheolsu[i][j];
		}
	}

	int call, calls = 0;
	for (size_t i = 0; i < MAX*MAX; i++) {
		cin >> call;
		++calls;
		
		logic(call);
		if (cntBingo() >= 3) {
			cout << calls << "\n";
			return 0;
		}
	}
	return 0;



}