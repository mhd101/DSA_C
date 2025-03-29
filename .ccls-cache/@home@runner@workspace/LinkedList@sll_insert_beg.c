// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//   int data;
//   struct node *link;
// };

// struct node* add_at_beg(struct node *head, int data){

//   struct node *ptr = malloc(sizeof(struct node));
//   ptr->data = data;
//   ptr->link = NULL;

//   ptr->link = head;
//   head = ptr;
//   return head;

// }

// int main() {

//   // first node
//   struct node *head = malloc(sizeof(struct node));
//   head->data = 1;
//   head->link = NULL;

//   // second node
//   struct node *current = malloc(sizeof(struct node));
//   current->data = 2;
//   current->link = NULL;
//   head->link = current;

//   // third node
//   current = malloc(sizeof(struct node));
//   current->data = 3;
//   current->link = NULL;
//   head->link->link = current;

//   // inserting element at the beginning
//   head = add_at_beg(head,0);

//   struct node *ptr = NULL;
//     ptr = head;
//     while(ptr != NULL){
//       printf("%d ", ptr->data);
//       ptr = ptr->link;
//     }

//   return 0;
// }

