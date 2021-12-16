#include <stdio.h> 
#include <stdlib.h> 

struct Node { 
	int data; 
	struct Node* next; 
}; 

 
void printList(struct Node* n) 
{ 
	while (n != NULL) { 
		printf(" %d ", n->data); 
		n = n->next; 
	} 
} 

int main() 
{ 
	struct Node* head = NULL; 
	struct Node* second = NULL; 
	struct Node* third = NULL; 

	// allocate 3 nodes in the heap 
	head = (struct Node*)malloc(sizeof(struct Node)); 
	second = (struct Node*)malloc(sizeof(struct Node)); 
	third = (struct Node*)malloc(sizeof(struct Node)); 

	head->data = 1; // assign data in first node 
	head->next = second; // Link first node with second 

	second->data = 2; // assign data to second node 
	second->next = third; 

	third->data = 3; // assign data to third node 
	third->next = NULL; 

	printList(head); 

	return 0; 
}
