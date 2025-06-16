#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = s;
    
    int idx=0;
    for(int i=0;i<s.length();++i)
    {
        // 짝수면
        if(idx%2==0)
        {
            answer[i] = toupper(answer[i]);
        }
        else
        {
            answer[i] = tolower(answer[i]);
        }
        if(answer[i]==' ')
        {
            idx=0;
            continue;
        }
        idx++;
    }
    
    return answer;
}