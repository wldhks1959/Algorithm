#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//var
vector<int> v;
int n, value, tip;
long long int sum = 0;
//main
int main(void)
{
	cin >> n;
	while (n--)
	{
		cin >> value;
		v.push_back(value);
	}
	sort(v.begin(), v.end(), greater<>()); // 내림차순 정렬 

	for (int i = 0; i < v.size(); i++)
	{
		tip = v[i] - i ;	
		if(tip>=0) sum += tip;
	}
	cout << sum;
	return 0;
}