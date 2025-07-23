#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1001
using namespace std;

int b, c, d;
vector<int> burger, side, drink;

void discount(void) {
	int sum = 0;
	sort(burger.begin(), burger.end(), greater<int>());
	sort(side.begin(), side.end(), greater<int>());
	sort(drink.begin(), drink.end(), greater<int>());
	int setNum = min(burger.size(), min(side.size(), drink.size()));

	for (int i = 0; i < setNum; i++) {
		sum += burger[i] * 0.9;
		sum += side[i] * 0.9;
		sum += drink[i] * 0.9;
	}

	//나머지는 정상가
	for (int i = setNum; i < burger.size(); i++)
		sum += burger[i];
	for (int i = setNum; i < side.size(); i++)
		sum += side[i];
	for (int i = setNum; i < drink.size(); i++)
		sum += drink[i];

	cout << sum << "\n";
}
int main(void) {
	cin >> b >> c >> d;
	int sum = 0;

	for (int i = 0; i < b; i++) {
		int price;
		cin >> price;
		burger.push_back(price);
		sum += price;
	}

	for (int i = 0; i < c; i++){
		int price;
		cin >> price;
		side.push_back(price);
		sum += price;
	}

	for (int i = 0; i < d; i++){
		int price;
		cin >> price;
		drink.push_back(price);
		sum+= price;
	}
	cout << sum << "\n"; //정상가격
	discount();
	return 0;
}