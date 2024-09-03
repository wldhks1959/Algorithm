#include <iostream>
using namespace std;

int main(void)
{
	int n, b, h, w, p, min, sum = 0;
	cin >> n >> b >> h >> w;
	min = b + 1;
	// 호텔 수만큼 순회 
	for (int i = 0; i < h; i++)
	{
		sum = 0;
		cin >> p;
		// 주마다 수용 가능한 인원 바탕으로, 비용 계산
		for (int j = 0, tmp; j < w; j++)
		{
			cin >> tmp;
			if (tmp >= n) sum = p * n;
		}
		if (min > sum && sum != 0) min = sum;
	}
	if (min > b) cout << "stay home";
	else cout << min;
	return 0;
}