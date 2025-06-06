#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(const char* s) {
	int len = strlen(s);
	int cnt = 0;

	for (int i = 0; i < len; i++)
	{
		if (s[i] == '(') cnt++;
		else cnt--;

		if (cnt < 0) return false;
	}
	return (cnt == 0);
}