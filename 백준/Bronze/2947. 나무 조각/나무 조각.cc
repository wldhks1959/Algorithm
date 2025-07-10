#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void print_log(int log[])
{
	for (int i = 0; i < 5; i++)
		cout << log[i] << " ";
	cout << "\n";
}

int main(void)
{
	int log[5];
	for (int i = 0; i < 5; i++)
		cin >> log[i];

	while (1)
	{
		if (log[0] > log[1])
		{
			swap(log[0], log[1]);
			print_log(log);
		}
		if (log[1] > log[2])
		{
			swap(log[1], log[2]);
			print_log(log);
		}
		if (log[2] > log[3]) 
		{
			swap(log[2], log[3]);
			print_log(log);
		}
		if (log[3] > log[4]) 
		{
			swap(log[3], log[4]);
			print_log(log);
		}
		if (log[0] == 1
			&& log[1] == 2
			&& log[2] == 3
			&& log[3] == 4
			&& log[4] == 5) break;
	}
	return 0;
}