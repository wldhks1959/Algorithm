#include <iostream>
#include <string>
using namespace std;

void solve(int n)
{
	if (n % 3 == 0 && n % 5 == 0)
	{
		cout << "FizzBuzz" << "\n";
	}
	else if (n % 3 == 0)
	{
		cout << "Fizz" << "\n";
	}
	else if (n % 5 == 0)
	{
		cout << "Buzz" << "\n";
	}
	else
	{
		cout << n << "\n";
	}
}

int main(void)
{
	string str1, str2, str3;
	cin >> str1 >> str2 >> str3;

	if (str3 != "FizzBuzz" && str3 != "Fizz" && str3 != "Buzz")
	{
		solve(stoi(str3) + 1);
	}
	else if (str2 != "FizzBuzz" && str2 != "Fizz" && str2 != "Buzz")
	{
		solve(stoi(str2) + 2);
	}
	else
	{
		solve(stoi(str1) + 3);
	}
	return 0;
}