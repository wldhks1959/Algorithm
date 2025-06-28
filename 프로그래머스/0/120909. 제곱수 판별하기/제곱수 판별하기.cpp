#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) 
{
    int a = sqrt(n);
    
    if(sqrt(n) == a)
        return 1;
    else
        return 2;
}