#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int t;
int a, b;
string cmd;

int main(void)
{
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> cmd;
		if (cmd == "P=NP")
			cout << "skipped\n";
		else
		{
			int token = cmd.find('+');
			a = stoi(cmd.substr(0, token));
			b = stoi(cmd.substr(token+1));
			cout << a + b<<"\n";
		}
	}
	return 0;
}