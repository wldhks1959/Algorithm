#include <iostream>
using namespace std;
#define MAX 1002

int n, k, cnt=0;
bool isPrime[MAX];

int main() 
{
    cin >> n >> k;
    
    // 모든 수를 소수로 가정
    for (int i = 2; i <= n; i++) 
    {
        isPrime[i] = true;
    }

    for (int i = 2; i <= n; i++) 
    {
        for (int j = i; j <= n; j += i) 
        {
            if (!isPrime[j]) continue;

            isPrime[j] = false;
            cnt++;
            if (cnt == k) cout << j << "\n";
        }
    }
  
    return 0;
}