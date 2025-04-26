#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

void del_random(struct node *head, int pos){
  struct node *prev = head;
  struct node *curr = head;

  if(head == NULL){
    printf("List is already empty!!");
  }else if(pos == 1){
    head = curr->link;
    free(curr);
    curr = NULL;
  } else{
    while(pos != 1){
      prev = curr;
      curr = curr->link;
      pos--;
    }
    prev->link = curr->link;
    free(curr);
    curr = NULL;
  }
  
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

  current = malloc(sizeof(struct node));
  current->data = 4;
  current->link = NULL;
  head->link->link->link = current;

  // deleting at random position
  del_random(head, 2);

  struct node *ptr = head;
  while(ptr != NULL){
    printf("%d ", ptr->data);
    ptr = ptr->link;
  }

  return 0;
}