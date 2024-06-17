#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int arr1[4], arr2[2], sum=0;
	for (int i = 0; i < 4; i++)
		cin >> arr1[i];
	sort(arr1, arr1 + 4, greater<>());

	for (int i = 0; i < 2; i++)
		cin >> arr2[i];
	sort(arr2, arr2 + 2, greater<>());

	for (int i = 0; i < 3; i++)
		sum+=arr1[i];

	for (int i = 0; i < 1; i++)
		sum+= arr2[i];

	cout << sum;

	return 0;
}