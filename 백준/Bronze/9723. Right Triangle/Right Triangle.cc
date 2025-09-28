#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	int t; cin >> t;
	int idx = 1;
	while (t--)
	{
		string flag = "";
		
		int x1, x2, x3;
		cin >> x1 >> x2 >> x3;

		int x[3] = { x1, x2, x3 };
		sort(x, x + 3);

		if (x[0]+x[1] > x[2])
		{
			if (x[0] * x[0] + x[1] * x[1] == x[2] * x[2])
				flag = "YES";
			else
				flag = "NO";
		}
		else
		{
			flag = "NO";
		}

		cout << "Case #" <<idx<<": "<<flag<<"\n";
		idx++;
	}
	return 0;
}
