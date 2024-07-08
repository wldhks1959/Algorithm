#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string sentence, num="";
	bool check = false; // - 판별 
	int res = 0; // 최소값 

	cin >> sentence;
	
	for (int i = 0; i <= sentence.size(); i++)
	{
		// 1. 기호를 만났거나, 식이 끝일 경우 
		if (sentence[i] == '-' || sentence[i] == '+' || i == sentence.size())
		{
			// 바로 직전에 - 인 경우, 숫자를 빼줌 
			if (check == true)
			{
				res -= stoi(num);
				num = "";
			}

			// 바로 직전에 -가 없었다면, 숫자를 더해줌 
			else if (check == false)
			{
				res += stoi(num);
				num = "";
			}
		}

		// 기호가 아닌 경우 (숫자인 경우)
		else
		{
			num += sentence[i];
		}

		// - 를 만난 경우 
		if (sentence[i] == '-')
		{
			check = true;
		}
	}
	cout << res;

	return 0;
}