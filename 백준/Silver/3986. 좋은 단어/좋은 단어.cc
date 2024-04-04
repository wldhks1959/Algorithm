//3986 좋은 단어
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int t; cin >> t;
	int cnt = 0; // 인지 아닌지 확인
	while(t--)
	{
		string str; cin >> str;
		stack<char> s;
		for (int j = 0; j < str.length(); j++)
		{
			if (s.empty()) s.push(str[j]);
			else if (s.top() == str[j]) s.pop();
			else s.push(str[j]);
		}
		if (s.empty()) cnt++;
	}
	cout << cnt;
	return 0;
}