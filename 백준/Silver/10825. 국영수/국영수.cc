/*
1. 국어 점수를 내림차순 정렬
2. 만약! 국어 같으면 -> 영어 오름차순 정렬
3. 만약! 국어,영어 같으면 -> 수학 내림차순 정렬
4. 만약! 모든 국,영,수 같으면 -> 사전 순 정렬
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct arr {
	string name;
	int kor, eng, mat;
};

bool compare(arr a, arr b)
{
	if (a.kor == b.kor)
	{
		if (a.eng == b.eng)
		{
			if (a.mat == b.mat) return a.name < b.name; // 사전 순
			else return a.mat > b.mat; // 수학 내림차순 정렬 
		}
		else return a.eng < b.eng; // 영어 오름차순 정렬 
	}
	else return a.kor > b.kor; // 국어 내림차순 정렬 
}

int main(void)
{
	int n; cin >> n;

	vector<arr> list(n); // n크기 벡터 생성
	for(int i=0;i<n;i++)
		cin >> list[i].name >> list[i].kor >> list[i].eng >> list[i].mat;

	sort(list.begin(), list.end(), compare);
	
	for (int i = 0; i < n; i++)
		cout << list[i].name << "\n";
	return 0;
}