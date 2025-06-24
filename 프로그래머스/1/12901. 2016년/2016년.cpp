#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) 
{
    int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    string day[7] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    
    int sum = b;
    
    for(int i=0;i<a-1;i++)
        sum +=month[i];
    
    return day[sum%7];
}