#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

class LL {
private : 
    Node* head = nullptr;
public:
    void Push(int value) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->next = head;
        newNode->data = value;

        //만약 head노드가 null이라면 
        if (head == nullptr) {
            head = newNode;
            head->next = head;
        }
        else {
            Node* curr = head;
            while (curr->next != head) curr = curr->next;
            curr->next = newNode;
            newNode->next = head;
        }
        return;
    }

    int Pop(int K) {
        Node* prev = head;
        while (K--) {
            prev = head;
            head = head->next;
        }

        int value = head->data;
        prev->next = head->next;

        //free(head);
        head = prev->next;
        return value;
    }
};

int main() {
    int N, K;
    LL list;

    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++) {
        list.Push(i);
    }
    printf("<");

    for (int i = 1; i < N; i++) {
        printf("%d, ", list.Pop(K-1));
    }
    printf("%d>",list.Pop(N));
}