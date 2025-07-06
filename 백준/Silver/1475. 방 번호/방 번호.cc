#include <iostream>
#include <cmath>
using namespace std;

int map[10];
int num;

int main(void) {
    cin >> num;

    while (num > 0) {
        int tmp = num % 10;
        map[tmp]++;
        num /= 10;
    }

    int sixNine = map[6] + map[9];
    int maxCnt = (sixNine + 1) / 2;  // 올림 처리

    // 다른 숫자 중에서 가장 많이 필요한 것
    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) continue;
        if (map[i] > maxCnt) maxCnt = map[i];
    }

    cout << maxCnt;
    return 0;
}