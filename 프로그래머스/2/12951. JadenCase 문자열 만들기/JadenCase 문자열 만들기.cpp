#include <string>
#include <vector>
#include <cctype>
#include <iostream>

using namespace std;

string solution(string s) 
{
    if(isalpha(s[0])!=0) s[0] = toupper(s[0]);
    for(int i=1;i<s.size();i++)
    {
        // 이전 문자 공백이며, 현재 문자가 알파벳이라면?
        if(s[i-1] == ' ' && isalpha(s[i])!=0)
        {
            s[i] = toupper(s[i]);
        }
        // 현재 문자가 알파벳이라면?
        else if(isalpha(s[i]) != 0)
        {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}
// 모든 단어의 첫 문자가 대문자, 그 외의 알파벳은 소문자
// 단 첫 문자가 알파벳이 아닐 때에는 이어지는 알파벳은 소문자로 쓰면 된다.
// 그러면 공백을 체크하고, \n이 아닐 때까지 공백 다음 문자가 알파벳인지 판단하여 upperbound를 사용하면 되겠네? 
// 공백 다음의 첫 문자가 알파벳일 경우, toupper
// 아니고 알파벳이면, tolower 
// 알파벳인지 판단? if(isalpha(알파벳)==0) 알파벳 아님 