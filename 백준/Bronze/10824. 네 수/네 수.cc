#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#define iter 4
int arr[iter];
int n = iter;

int main(void)
{
	for (int i = 0; i < 4; i++) cin >> arr[i];
	string A = to_string(arr[0]) + to_string(arr[1]);
	string B = to_string(arr[2]) + to_string(arr[3]);
	long long C = stoll(A) + stoll(B);
	cout << C;

	return 0;
}