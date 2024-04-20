#include <iostream>
using namespace std;

int main() {
    int n, avg; cin >> n >> avg;
    double res = n * (avg - 1) + 1;
    cout << res;
    return 0;
}