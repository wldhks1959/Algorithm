// 5565
#include <iostream>
using namespace std;
int value;
int sum;

int main(void)
{
   cin >> sum;
   for (int i = 0; i < 9; i++)
   {
      cin >> value;
      sum -= value;
   }
   cout << sum;
   return 0;
}