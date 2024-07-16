// 1699
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
typedef vector<int> vi;

int main(void)
{
   // var
   unsigned int n;  cin >> n;
   vi dp(n + 1, INT_MAX);

   // init 
   dp[0] = 0;

   // 1~N iter 
   for (int i = 1; i <= n; i++)
   {
      // i보다 작거나 같은 제곱수들에 대해 점화식 적용 
      for (int j = 1; j * j <= i; j++)
      {
         // 점화식 적용 
         dp[i] = min(dp[i], dp[i - j * j] + 1);
      }
   }

   cout << dp[n] << "\n";
   return 0;
}
