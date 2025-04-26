#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

void add_at_random(struct node *head, int data, int pos){

  struct node *temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->link = NULL;

  struct node *ptr = head;

  pos--;
  while(pos != 1){
    ptr = ptr->link;
    pos--;
  }
  temp->link = ptr->link;
  ptr->link = temp;
  
}

int main() {

  // first node
  struct node *head = malloc(sizeof(struct node));
  head->data = 1;
  head->link = NULL;

  // second node
  struct node *current = malloc(sizeof(struct node));
  current->data = 2;
  current->link = NULL;
  head->link = current;

  // third node
  current = malloc(sizeof(struct node));
  current->data = 3;
  current->link = NULL;
  head->link->link = current;

  // inserting element at the beginning
  add_at_random(head,0,1);

  struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
      printf("%d ", ptr->data);
      ptr = ptr->link;
    }

  return 0;
}

