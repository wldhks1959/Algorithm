#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000002

int n, arr[MAX];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(0); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr + n);
	
	for (int i = 0; i < n; i++)
		cout<< arr[i] <<"\n";
	
	return 0;
}