#include <iostream>
#include <utility>
using namespace std;

int main(void)
{
	int s, k, h;
	cin >> s >> k >> h;

	int res = 0;
	res = s + k + h;
	if (res >= 100)
		cout << "OK";
	else {
		res = min(min(s, k), h);
		if (res == s) cout << "Soongsil";
		else if(res==k) cout << "Korea";
		else if(res==h) cout << "Hanyang";
	}

	return 0;

}