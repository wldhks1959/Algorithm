#include <iostream>
using namespace std;
#define MAX 52
int main() 
{

    int n; cin >> n;

    int arr[MAX] = { 0, };
    for (int i = 0, value; i < n; i++)
    {
        cin >> value;
        arr[value]++;
    }
        
    // 참일 경우 
    for (int i = 50; i >= 0; i--)
        if (arr[i] == i) 
        {
            cout << i;
            return 0;
        }
    // 참 못 찾았을 경우
    cout << -1;
}