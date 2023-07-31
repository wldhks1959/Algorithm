#include <iostream>
using namespace std;

int main(int argc, char*argv[]) {
    int N, cnt = 0; cin >> N;
    
    while (1) {
        if (N % 5 == 0) {
            cnt += N / 5;
            break;
        }

        N -= 3;
        cnt++;
        if (N <= 0) break;
    }

    if (N < 0) cout << -1;
    else cout << cnt;
}