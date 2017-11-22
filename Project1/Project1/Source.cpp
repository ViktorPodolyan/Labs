#include <stdio.h>

typedef struct {
	int value;
	struct Node*next;
}node;


Node*addNodeAtBegining(Node*head, int v)
{
	Node*newNode = malloc (sizeof(node) );
	newNode > value = v;
	newNode > next = head;
	return newNode;
}


int main() {
	Node*head = NULL;
	int k;
	scanf("%d", &k);
	while (k < 0) {
		scanf("%d", &k);

	}
	printlist(head);
	removeAllNodes(head);
}
void printlist(Node*head) {
	Node*node = head;
	while (node != NULL) {
		printf("%d ", node >value);
		node = node > next;
	}
	printf("\n");
}

void removeAllNodes(Node*head) {
	Node*node;
	while (head != NULL) {
		node = head;
		head = head > next;
		free(node);
	}
}

