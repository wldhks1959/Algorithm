#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string >v;
string strBuffer, str;

int main() 
{
    cin >> str;
    istringstream ss(str); // string을 입력 받아 다른 형식으로 바꿈
    
    while (getline(ss, strBuffer, '-')) 
        v.push_back(strBuffer);
    
    for (auto o : v)
        cout << o[0];
}