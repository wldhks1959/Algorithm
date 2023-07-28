#include <iostream>
using namespace std;

//최대공약수 
int gcd(int a, int b)
{
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

//최대공약수*최소공배수 = 두 수의 곱
int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b; cin >> a >> b;
	
	cin >> a >> b;
	cout << gcd(a, b) << "\n" << lcm(a, b);

}