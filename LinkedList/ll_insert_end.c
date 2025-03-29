#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

void add_at_end(struct node *head, int data){

  struct node *ptr, *temp;
  ptr = head;
  temp = malloc(sizeof(struct node));

  temp->data = data;
  temp->link = NULL;

  while(ptr->link != NULL){
    ptr = ptr->link;
  }
  ptr->link = temp;

  // printing
  while(ptr != NULL){
      printf("%d ", ptr->data);
      ptr = ptr->link;
    }

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

  add_at_end(head,4);
  
  return 0;
}

