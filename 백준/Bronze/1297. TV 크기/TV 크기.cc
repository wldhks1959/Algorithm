#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d, h, w;

    cin >> d >> h >> w;

    cout << (int)(d / sqrt(h * h + w * w) * h) << " "
         << (int)(d / sqrt(h * h + w * w) * w) << "\n";

    return 0;
}
