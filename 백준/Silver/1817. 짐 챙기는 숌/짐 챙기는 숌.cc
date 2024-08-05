#include<iostream>
using namespace std;
#define MAX 100001

int n, m, cnt = 1, sum;
int arr[MAX];

int main() 
{
	cin >> n >> m;
	
	// 책 없을 경우 처리
	if (n == 0) 
	{
		cout << 0 << "\n";
		return 0;
	}

	// 책 무게 입력
	for (int i = 0; i < n; i++) 
		cin >> arr[i];

	for (int i = n - 1; i >= 0; i--) 
	{
		sum += arr[i];
		if (sum > m) 
		{
			cnt++;
			sum = arr[i];
		}
	}

	// 결과 처리
	cout << cnt << "\n";
	return 0;
}