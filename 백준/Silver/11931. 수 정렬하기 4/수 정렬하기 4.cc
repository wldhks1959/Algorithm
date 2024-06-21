#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000002

int n, arr[MAX];

int main(void)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr + n, greater<int>());
	
	for (int i = 0; i < n; i++)
		cout<< arr[i] <<"\n";
	
	return 0;
}