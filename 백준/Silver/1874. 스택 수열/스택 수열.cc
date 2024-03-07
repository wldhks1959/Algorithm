#include <iostream>
#include <stack>
using namespace std;

stack<int> st;
string op;

int main(void)
{
	int n; cin >> n;
	int i = 1;
	for (int j = 0,value; j < n; j++)
	{
		cin >> value;
		if (i <= value)
		{
			while (i <= value)
			{
				st.push(i);
				op += '+';
				i++;
			}
			st.pop();
			op += '-';
		}
		else
		{
			if (st.top() < value)
			{
				cout << "NO\n";
				return 0;
			}
			else
			{
				st.pop();
				op += '-';
			}
		}
	}
	for (int j = 0; j < op.length(); j++) cout << op[j] << "\n";
	return 0;
}