#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int item;
  struct Node *next;
};

void insertAtBeginning(struct Node **ref, int data)
{
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

  new_node->item = data;
  new_node->next = (*ref);

  // Move head to new node
  (*ref) = new_node;
}

// Insert a node after a node
void insertAfter(struct Node *node, int data)
{
  if (node == NULL)
  {
    printf("the given previous node cannot be NULL");
    return;
  }

  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->item = data;
  new_node->next = node->next;
  node->next = new_node;
}

void insertAtEnd(struct Node **ref, int data)
{
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  struct Node *last = *ref;

  new_node->item = data;
  new_node->next = NULL;

  if (*ref == NULL)
  {
    *ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void deleteNode(struct Node **ref, int key)
{
  struct Node *temp = *ref, *prev;

  if (temp != NULL && temp->item == key)
  {
    *ref = temp->next;
    free(temp);
    return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->item != key)
  {
    prev = temp;
    temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL)
    return;

  // Remove the node
  prev->next = temp->next;

  free(temp);
}

// Print the linked list
void printList(struct Node *node)
{
  while (node != NULL)
  {
    printf(" %d ", node->item);
    node = node->next;
  }
}

// Driver program
int main()
{
  struct Node *head = NULL;

  insertAtEnd(&head, 1);
  insertAtBeginning(&head, 2);
  insertAtBeginning(&head, 3);
  insertAtEnd(&head, 4);
  insertAfter(head->next, 5);

  printf("Linked list: ");
  printList(head);

  printf("\nAfter deleting an element: ");
  deleteNode(&head, 3);
  printList(head);
}
