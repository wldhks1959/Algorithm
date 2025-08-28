#include <iostream>
using namespace std;

int main() 
{
	char c;
	int	num; cin >> num;

	while (true) 
    {
		cin >> c; 
		if (c == '=') break;

		int tmp; cin >> tmp;
		if (c == '+') num += tmp;
		else if (c == '-') num -= tmp;
		else if (c == '*') num *= tmp;
		else num /= tmp;
	}
	cout << num;
    return 0;
}