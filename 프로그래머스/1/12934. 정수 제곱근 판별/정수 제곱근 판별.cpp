#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    
    long long tmp = sqrt(n);
    if(pow(tmp, 2) == n) 
    {
        answer = pow(sqrt(n)+1, 2);
    }
    else answer = -1;
    
    return answer;
}