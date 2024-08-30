#include <iostream>
using namespace std;

int main() 
{
	int n, x, ans = 0; cin >> n;
	int MIN = 1000000007;
    
	while (n--) 
    {
		cin >> x;
		MIN = min(MIN, x);
		ans = max(ans, x - MIN);
	}

	cout << ans;
    return 0;
}