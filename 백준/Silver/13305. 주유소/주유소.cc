#include <iostream>
#include <vector>
#include <climits>
using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll solve(int n, vi dist, vi cost)
{
	int minCost = INT_MAX;
	ll distSum = 0;

	for (int i = 0; i < n - 1; i++)
	{
		if (cost[i] < minCost) minCost = cost[i];
		distSum += (ll)minCost * (ll)dist[i];
	}
	return distSum;
}

int main(void)
{
	int n;  cin >> n;
	vi dist(n - 1), cost(n);

	for (int i = 0; i < n - 1; i++) cin >> dist[i];
	for (int i = 0; i < n; i++) cin >> cost[i];
	cout << solve(n, dist, cost);
	return 0;
}