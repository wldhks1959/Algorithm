#include <iostream>
using namespace std;
#define MAX 10

int n, m;
int arr[MAX] = { 0, };
bool visited[MAX] = { false, };

void func(int num, int cnt)
{
	// m개를 모두 선택한 경우 
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	// num부터 n까지 순회 
	for (int i = num; i <= n; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[cnt] = i; // 배열에 현재 숫자 저장 
			func(i + 1, cnt + 1); // 다음 숫자와 카운트를 증가시켜 재귀 호출 
			visited[i] = false;
		}
	}
}

int main(void)
{
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++)
		arr[i] = i;
	func(1, 0);
	return 0;
}