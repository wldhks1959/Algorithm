#include <iostream>
using namespace std;

double fact(int n)
{
	if (n <= 1) return 1;
	return n * fact(n - 1);
}

double expo(int n)
{
	double ans = 1;

	if (n == 0) return 0;
	else
	{
		for (int i = 1; i <= n; i++)
			ans += double(1 / fact(i));
		return ans;
	}
}

int main(void)
{
    cout<<"n e\n";
    cout<<"- -----------\n";
	cout<<"0 1\n";
	cout<<"1 2\n";
	cout<<"2 2.5\n";
	for (int i = 3; i < 10; i++)
	{
		printf("%d %.9f\n", i, expo(i));
	}
    return 0;
}