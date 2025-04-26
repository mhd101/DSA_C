#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

void insert_random(struct node *head, int data, int pos){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;

    pos--;
    while(pos != 1){
        ptr = ptr->next;
        pos--;
    }
    temp->next = ptr->next;
    if(ptr->next != NULL) {
        ptr->next->prev = temp; // updating next node: prev
    }
    ptr->next = temp;
    temp->prev = ptr;

}

int main(){
    struct node *head = malloc(sizeof(struct node));
    struct node *current = malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 1;
    head->next = current;

    current->prev = head;
    current->data = 3;
    current->next = NULL;

    insert_random(head, 2, 2);

    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

}