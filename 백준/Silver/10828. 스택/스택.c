#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 10002

int stack[MAX_STACK_SIZE];
int idx = -1;

void push(int x){
	stack[++idx] = x;
}

void pop(){
	if (idx == -1) printf("-1\n");
	else {
		printf("%d\n", stack[idx]);
		idx--;
	}
}

int size(){
	return printf("%d\n", idx+1);
}

void empty(){
	if (idx == -1) printf("1\n");
	else printf("0\n");
}

void top(){
	if (idx == -1) printf("-1\n");
	else printf("%d\n", stack[idx]);
}

int main(void){
	int n; scanf("%d", &n);
	char cmd[10]= "NULL";
	for (int i = 0; i < n; i++) {
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) {
			int num; 
			scanf("%d", &num);
			// push 명령
			push(num);
		}
		else if (strcmp(cmd, "pop") == 0) {
			pop();
		}
		else if (strcmp(cmd, "size") == 0) {
			size();
		}
		else if (strcmp(cmd, "empty") == 0) {
			empty();
		}
		else if (strcmp(cmd, "top") == 0) {
			top();
		}
	}
	return 0;
}