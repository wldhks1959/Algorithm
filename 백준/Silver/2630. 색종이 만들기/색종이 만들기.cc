#include <iostream>
using namespace std;
#define MAX 130
int white=0, blue = 0;
int n; 
int map[MAX][MAX]; // 종이 색상 저장 

void func(int x, int y,int n)
{
	int init = map[x][y]; // 현재 영역의 1번째 색상 저장 
	for (int i = x; i < x + n; i++) 
	{
		for (int j = y; j < y + n; j++)
		{
			// 다른 색상이 있으면 4개의 영역으로 분할하여 재귀 호출 
			if (init != map[i][j])
			{
				func(x,y,n/2);
				func(x,y+n/2,n/2);
				func(x+n/2, y, n/2);
				func(x+n/2, y+n/2, n/2);
				return;
			}
		}
	}
	// 모든 영역이 같은 색상이라면 해당 색상 카운트 증가 
	if (init == 0) white++;
	else blue++;
}

int main(void)
{
	cin >> n;
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];

	func(0,0,n);

	cout << white <<"\n";
	cout << blue << "\n";
	return 0;
}