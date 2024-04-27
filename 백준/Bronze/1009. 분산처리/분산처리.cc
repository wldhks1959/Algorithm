// 1009 분산처리 
#include <iostream>
using namespace std;

int main()
{
   int t; cin >> t;
   int tmp=1, a, b;
   while (t--) {
      cin >> a >> b;
      for (int i = 0; i < b; i++) {
         tmp = (tmp * a) % 10; 
      }
      if (tmp == 0) cout << "10\n";
      else cout << tmp << "\n";
      tmp = 1;
   }
   return 0;
}