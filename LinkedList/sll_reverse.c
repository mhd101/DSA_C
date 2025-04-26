#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};


struct node* reverse(struct node *head){
  struct node *curr, *prev, *next;
  curr = head; // pointing to the head
  prev = NULL; // storing prev node
  while(curr != NULL){
    
    next = curr->link; // storing next node
    
    curr->link = prev; // reverse current node 
    
    prev = curr;  // updating previous node
    curr = next; // updating current node
  }
  return prev; // returning last node as head
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 1;
  head->link = NULL;

  struct node *current = malloc(sizeof(struct node));
  current->data = 2;
  current->link = NULL;
  head->link = current;

  current = malloc(sizeof(struct node));
  current->data = 3;
  current->link = NULL;
  head->link->link = current;

  head = reverse(head);

  struct node *ptr = head;
  while(ptr != NULL){
    printf("%d ", ptr->data);
    ptr = ptr->link;
  }
}