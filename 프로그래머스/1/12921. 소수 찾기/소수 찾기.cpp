#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int n) {
    if(n<2)
    {
        return 0;
    }
    
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=n; j+=i)
            {
               isPrime[j] = false; 
            }
        }
    }
    
    int answer = count(isPrime.begin(), isPrime.end(), true);
    
    return answer;
}