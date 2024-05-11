#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c; cin >> a >> b >> c;
	if (a == b && b == c) cout <<"*";
	else if(a==b && b!=c) cout << "C";
	else if (a != b && b == c) cout << "A";
	else if (a == c && a != b) cout << "B";
	return 0;
}