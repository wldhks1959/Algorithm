#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 102

int h, w;
char c;
int map[MAX][MAX] = { 0, };

int main(void) {
	cin >> h >> w;

	for (size_t i = 0; i < h; i++) {
		for (size_t j = 0; j < w; j++) {
			cin >> c;
			if (c == 'c') map[i][j] = 0;
			else map[i][j] = -1;
		}
	}

	for (size_t i = 0; i < h; i++) {
		for (size_t j = 0; j < w; j++) {
			if (j > 0
				&& map[i][j - 1] != -1 // 아직 구름이 도달하지 않음
				&& map[i][j] != 0) // 현재 구역이 구름이 있음
				map[i][j] = map[i][j - 1] + 1;
		}
	}

	for (size_t i = 0; i < h; i++) {
		for (size_t j = 0; j < w; j++) {
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}