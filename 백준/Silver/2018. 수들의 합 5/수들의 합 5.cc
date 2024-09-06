#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int n, ans=0;

int main(void)
{   
    cin >> n;
    
    int left = 1, right = 1, sum = 0;
    while(left <= right && right <= n+1)
    {        
        if(sum > n)
        {
            sum -= left;
            left++;
        }
        else if(sum < n)
        {
            sum += right;
            right++;
        }
        else if(sum == n)
        {
            ans++;
            sum += right;
            right++;
        }
    }   
    
    cout << ans;
    return 0;
}