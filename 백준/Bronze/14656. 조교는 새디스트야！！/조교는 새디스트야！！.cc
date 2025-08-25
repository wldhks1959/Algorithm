#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int n; scanf("%d", &n);
	
	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	// 정렬할 배열
	int* tmp = (int*)malloc(sizeof(int) * n);
	for (size_t j = 0; j < n; j++) {
		tmp[j] = arr[j];
	}

	qsort(tmp, n, sizeof(int), compare);

	// 정렬할 배열과 원 배열 비교 후 cnt 
	int cnt = 0;
	for (size_t j = 0; j < n; j++) {
		if (tmp[j] != arr[j]) {
			cnt++;
		}
	}

	printf("%d", cnt);

	free(arr);
	free(tmp);
	return 0;
}