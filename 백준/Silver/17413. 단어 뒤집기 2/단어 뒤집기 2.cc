#include <iostream>
#include <string>
#include <stack>
using namespace std;

//var
string input;
stack<char> s;

void func(stack<char> &s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // input : <int><max>2147483647<long long><max>9223372036854775807
    getline(cin, input);
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '<') 
        {
            func(s);
            while (true)
            {
                cout << input[i];
                if (input[i] == '>')
                    break;
                i++;
            }
        }
        else if (input[i] == ' ')
        {
            func(s);
            cout << " ";
        }
        else
        {
            s.push(input[i]);
        }
    }
    func(s);
    return 0;
}