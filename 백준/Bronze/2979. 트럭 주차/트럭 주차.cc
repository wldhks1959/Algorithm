#include <iostream>
#define MAX 102
using namespace std;

int arr[MAX];

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < 3; i++) {
		int start = 0, end = 0;
		cin >> start >> end;
		for (int j = start; j < end; j++) {
			arr[j]++;
		}
	}

	int sum = 0;
	for (int i = 0; i < MAX; i++) {
		if (arr[i] == 1) sum += arr[i] * a;
		else if (arr[i] == 2) sum += arr[i] * b;
		else if (arr[i] == 3) sum += arr[i] * c;
	}

	cout << sum;
	return 0;
}