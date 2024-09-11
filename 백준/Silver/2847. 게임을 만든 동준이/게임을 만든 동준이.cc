#include <iostream>
using namespace std;

int main()
{
	int num[110] = { 0, };
	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) 
		cin >> num[i];

	for (int j = n; j > 0; j--) 
    {
		while (num[j] <= num[j - 1]) 
        {
			num[j - 1]--;
			cnt++;
		}
	}

	cout << cnt << "\n";
	return 0;
}