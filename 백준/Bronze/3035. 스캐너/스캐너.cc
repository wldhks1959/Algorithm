//3035
#include <iostream>
#include <string>
using namespace std;

int main() 
{
   int r, c, zr, zc;
   cin >> r >> c >> zr >> zc;


   for (int k = 0; k < r; k++) 
   {
      string str;
      for (int i = 0; i < c; i++) 
      {
         char ch; cin >> ch;
         for (int j = 0; j < zc; j++) 
            str += ch;
      }
      for (int i = 0; i < zr; i++) 
         cout << str << "\n";
   }
   return 0;
}