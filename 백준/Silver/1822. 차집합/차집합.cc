// 1822
#include <iostream>
#include <set>
using namespace std;

set<int> s; 

int a, b, num;
int main(void)
{
   cin >> a >> b;

   for (int i = 0; i < a; i++)
   {
      cin   >> num;
      s.insert(num);
   }

   for (int i = 0; i < b; i++)
   {
      cin >> num;
      auto it = s.find(num);
      if (it == s.end())
         continue;
      else
         s.erase(it);
   }

   cout << s.size() << "\n";

   for (auto num : s)
      cout<< num << " ";
   cout << "\n";
   return 0;
}