// 10984 
#include <iostream>
using namespace std;

int t, n, score, c;
double grade, g;

int main() 
{
   ios::sync_with_stdio(0); cin.tie(0);

   cin >> t;
   while (t--) 
   {
      cin >> n;
      score = 0, grade = 0;
      while (n--) 
      {
         cin >> c >> g;
         score += c; grade += c * g;
      }
      cout << score << ' ' << grade / score << '\n';
   }
}