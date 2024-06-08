#include <iostream>
using namespace std;

int main(void)
{
	int l, a, b, c, d;
	cin >> l >> a >> b >> c >> d;
	// a : total 국어 , c: 최대 국어
	// b: total 수학, d : 최대 수학 
	int kor, mat;
	
	if (a % c > 0)
		kor = a / c + 1;
	else
		kor = a / c;

	if (b % d > 0)
		mat = b / d + 1;
	else
		mat = b / d;

	cout << l - max(kor, mat);
	return 0;
}