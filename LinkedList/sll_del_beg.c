#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

struct node* del_at_beg(struct node *head){

  struct node *temp = head;
  head = head->link;
  free(temp);
  temp = NULL;
  
  return head;

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

  // deleting element at the beginning
  head = del_at_beg(head);

  struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
      printf("%d ", ptr->data);
      ptr = ptr->link;
    }

  return 0;
}

