#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    while (n--) {
        int an, bn;
        int a, b;
        int A[5] = { 0 }, B[5] = { 0 };
        int count = 0;

        cin >> an;
        for (int i = 0; i < an; i++) {
            cin >> a;  
            A[a]++;    
        }

        cin >> bn;
        for (int i = 0; i < bn; i++) {
            cin >> b;
            B[b]++;
        }

        // 개수 비교 (4부터 내림차순으로)
        for (int i = 4; i > 0; i--) {
            if (A[i] > B[i]) {
                cout << "A\n";
                break;
            } else if (A[i] < B[i]) {
                cout << "B\n";
                break;
            } else count++;  
        }
        if (count == 4) cout << "D\n";
    }
    return 0;
}