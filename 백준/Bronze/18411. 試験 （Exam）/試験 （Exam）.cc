#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int a[3];
    for(int i=0;i<3;i++) cin>>a[i];
    sort(a,a+3);
    cout <<a[1]+a[2];
    return 0;    
}