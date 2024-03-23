#include <iostream>
#define NUM 10000
using namespace std;

bool arr[NUM + 1] = { false, };

int func(int n)
{
	int sum = n; // sum : n의 각 자리수의 합 
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(void)
{
	int tmp; // func 결과 저장 변수

	for (int i = 1; i <= NUM; i++)
	{
		tmp = func(i);
		if (tmp <= NUM) arr[tmp] = true;
	}

	for (int i = 1; i <= NUM; i++)
		if (arr[i] == false) cout << i << "\n";

	return 0;
}