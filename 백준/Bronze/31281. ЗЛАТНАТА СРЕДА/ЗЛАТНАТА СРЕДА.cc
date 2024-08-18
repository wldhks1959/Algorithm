#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(void)
{
	long long int arr[3];
	for (int i = 0; i < 3; i++)
		cin >> arr[i];
	sort(arr, arr + 3);
	cout << arr[1];
	return 0;
}