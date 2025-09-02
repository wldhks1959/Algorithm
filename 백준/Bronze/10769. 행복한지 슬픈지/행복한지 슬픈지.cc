#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;

	getline(cin,s);

	int happy = 0, sad = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (i < s.length() - 3 
			&& s[i] == ':' 
			&& s[i + 1] == '-' 
			&& s[i + 2] == ')')
			happy++;

		else if (i < s.length()- 3 
				&& s[i] == ':' 
				&& s[i + 1] == '-' 
				&& s[i + 2] == '(')
			sad++;
	}

	if (!happy && !sad)
		cout << "none\n";
	else if (happy == sad)
		cout << "unsure\n";
	else if (happy > sad)
		cout << "happy\n";
	else
		cout << "sad\n";

	return 0;
}