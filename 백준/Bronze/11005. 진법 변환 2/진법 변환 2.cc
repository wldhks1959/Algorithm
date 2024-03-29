#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, b; cin >> n >> b;
	
	string res;
	while (n != 0)
	{
		int tmp = n % b;
		if (tmp > 9){
			tmp = tmp - 10 + 'A';
			res += tmp;
		}
		else{
			res += (tmp+ '0');
		}
		n /= b;
	}
	reverse(res.begin(), res.end());
	
	cout << res << '\n';
	return 0;
}