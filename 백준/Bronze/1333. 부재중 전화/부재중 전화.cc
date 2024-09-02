#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    int n, l, d;
    int bell = 0;
    
    cin>>n>>l>>d;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
            v.push_back(1);
        for(int j=0;j<5;j++)
            v.push_back(0);
    }
    
    while(1)
    {
        if(bell > v.size() || v[bell] ==0) break;
        else bell+=d;
    }
    
    cout<<bell;
    return 0;
}