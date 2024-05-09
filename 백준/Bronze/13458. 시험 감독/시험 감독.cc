#include <iostream>
#include <vector>
using namespace std;


int main() 
{
	int n, b, c; 
	long long sum = 0;

	// input
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) 
		cin >> v[i];
	cin >> b >> c;

	for (int i = 0; i < n; i++) 
	{
		if (v[i] <= b) 	sum++;
		else 
		{
			sum += (v[i] - b) / c + 1;
			if ((v[i] - b) % c != 0)
				sum++;
		}
	}
	cout << sum;
	return 0;
}