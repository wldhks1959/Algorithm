#include <iostream>
using namespace std;

int main()
{
   int a,b; cin>>a>>b;
   int result = b-a;
   if(result>=1 && 20>=result) cout<<"You are speeding and your fine is"<<" $100.";
   else if(result>=21 && result<=30) cout<<"You are speeding and your fine is"<<" $270.";
   else if(result>=31) cout<<"You are speeding and your fine is"<<" $500.";
   else cout<<"Congratulations, you are within the speed limit!";
    return 0;
}