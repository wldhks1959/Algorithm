#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, m; //과목, 마일리지
	cin >> n >> m;
	
	vector<int> point;
	for(size_t i = 0; i < n; i++)
	{
		int p, l; // 신청한 사람 수, 과목의 수강인원
		cin >> p >> l;
		
		vector<int> v(p);
		for (size_t j = 0; j < p; j++) 
		{
			cin >> v[j];
		}
		sort(v.begin(), v.end());
		
		// 신청한 사람 수 >= 수강 인원
		if (p >= l)
		{
			point.push_back(v[p - l]);
		}
		// 신청한 사람 수 < 수강 인원
		else
		{
			point.push_back(1);
		}
	}

	sort(point.begin(), point.end());

	int cnt = 0;
	for (auto& i : point)
	{
		if (m >= i)
		{
			cnt++;
			m -= i;
		}
	}

	cout << cnt << "\n";
	return 0;
}