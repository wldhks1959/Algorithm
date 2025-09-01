#include <iostream>
#include <string>
using namespace std;

int main() 
{

    string line;
    long long sum = 0;
    string num = "";

    while (getline(cin, line)) 
    {
        for (char c : line) 
        {
            if (isdigit(c)) 
            {
                num += c;
            }
            else if (c == ',') 
            {
                if (!num.empty()) 
                {
                    sum += stoll(num);
                    num.clear();
                }
            }
        }
    }

    // 마지막 숫자 처리
    if (!num.empty()) 
    {
        sum += stoll(num);
        num.clear();
    }

    cout << sum << "\n";
    return 0;
}