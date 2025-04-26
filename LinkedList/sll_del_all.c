#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

struct node* del_all(struct node *head){
  struct node *temp = head;
  while(temp != NULL){
    temp = temp->link;
    free(head);
    head = temp;
  }
  return head;
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

  head = del_all(head);

  struct node *ptr = head;
  while(ptr != NULL){
    printf("%d ", ptr->data);
    ptr = ptr->link;
  }
}