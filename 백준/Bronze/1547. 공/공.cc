#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, m;
    int arr[3]={1, 2, 3};
    
    cin >> m;
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        swap(arr[a-1], arr[b-1]);
    }

    for(int i=0; i<3; i++)
    {
        if(arr[i]==1) cout<<i+1;
    }
    return 0;
}