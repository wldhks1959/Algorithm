#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	double ax, ay, bx, by, cx, cy, ab_len, bc_len, ca_len, len1, len2, len3;
	cin >> ax >> ay >> bx >> by >> cx >> cy;

	// 기울기 같은 경우 -> 평행 사변형 못 만들어! 
	if ((bx-ax)*(cy-by)==(by-ay)*(cx-bx)) 
		cout << "-1.0";
	else
	{
		ab_len = sqrt(pow(ay - by, 2) + pow(ax - bx, 2));
		bc_len = sqrt(pow(by - cy, 2) + pow(bx - cx, 2));
		ca_len = sqrt(pow(cy - ay, 2) + pow(cx - ax, 2));
		
		len1 = (ab_len + bc_len) * 2;
		len2 = (bc_len + ca_len) * 2;
		len3 = (ca_len + ab_len) * 2;

		printf("%.16f", max(max(len1,len2),len3) - min(min(len1,len2),len3));
	}
	return 0;
}