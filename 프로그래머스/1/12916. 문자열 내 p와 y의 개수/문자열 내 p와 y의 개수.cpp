#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_cnt=0, y_cnt=0;
    
    // 소문자 변환
    for(auto &a : s) a=tolower(a);
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='p') p_cnt++;
        if(s[i]=='y') y_cnt++;
   }
    if(p_cnt != y_cnt) answer = false;

    return answer;
}