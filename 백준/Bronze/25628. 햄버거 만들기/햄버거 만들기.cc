#include <iostream>
#include <utility>
using namespace std;
int a, b;

int main(void) 
{
	cin >> a >> b;
	cout << min(a / 2, b);
	return 0;
}