#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int num, sum=0, a, b;
    cin>>num;
    while(num-->0)
    {
        cin>>a>>b;
        sum+=(a*b);
    }
    cout<<sum;
    return 0;
}