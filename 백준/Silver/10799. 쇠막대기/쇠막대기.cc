#include <iostream>
#include <stack>
using namespace std;

string str;

int pipe(string&str)
{
	stack<char> s;
	int res = 0;
	for (int i = 0; i < str.length(); i++)
	{	//여는 괄호면 스택에 push
		if (str[i] == '(') s.push(str[i]);
		//닫는 괄호면 이 괄호가 레이저 or 파이프 체크 
		else
		{
			s.pop();
			//레이저면
			if (str[i - 1] == '(') res += s.size();//잘린 갯수 추가 
			//파이프 끝이면 
			else res += 1;
		}
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> str;
	cout << pipe(str);
	return 0;
}