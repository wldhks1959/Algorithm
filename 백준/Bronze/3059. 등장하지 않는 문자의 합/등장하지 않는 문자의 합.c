#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 1002

int main(void) {
	int t; scanf("%d", &t);
	int res;
	char str[MAX];
	while (t--) {
		res = 2015; // 총 아스키 합 

		bool used[256] = { false };

		scanf("%s", str);

		for (size_t i = 0; i < strlen(str); i++) {
			unsigned char c = str[i];
			if (!used[c]) {
				res -= c;
				used[c] = true;
			}
		}
		printf("%d\n", res);
	}
	return 0;
}