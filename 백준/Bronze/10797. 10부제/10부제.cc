#include <iostream>
using namespace std;

int main() 
{
	int n=5, day, num, car = 0;
	cin >> day;
	while(n--)
	{
		cin >> num;
		if (num == day) car++;
	}
	cout << car;

	return 0;
}