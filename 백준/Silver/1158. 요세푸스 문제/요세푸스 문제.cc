#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

class LinkedList 
{
	private : 
		Node* head = nullptr;
	public :
		void Push(int value) 
		{
			Node* newNode = (Node*)malloc(sizeof(Node));
			newNode->data = value;
			newNode->next = head;

			// if headNode = null
			if (head == nullptr)
			{
				head = newNode;
				head->next = head;
			}
			else
			{
				Node* curr = head;
				while (curr->next != head) curr = curr->next;
				curr->next = newNode;
				newNode->next = head;
			}
			return;
		}
		int Pop(int K)
		{
			Node* prev = head;
			while (K--)
			{
				prev = head;
				head = head->next;
			}

			int value = head->data;
			prev->next = head->next;

			head = prev->next;
			return value;
		}
};

int main(void)
{
	int n, k;
	LinkedList list;

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++) list.Push(i);
	printf("<");

	for (int i = 1; i < n; i++) printf("%d, ", list.Pop(k - 1));
	printf("%d>", list.Pop(n));
	return 0;
}