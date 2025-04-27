#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data; 
    struct node *next;
};

struct node* del_random(struct node *head, int pos){
    struct node *ptr = head;

    while(pos > 1){
        ptr = ptr->next;
        pos--;
    }
    
    struct node* temp = ptr->prev;
    temp->next = ptr->next;
    ptr->next->prev = temp;
    free(ptr);
    return head;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 1;
    head->next = second;

    second->prev = head;
    second->data = 2;
    second->next = third;

    third->prev = second;
    third->data = 3;
    third->next = NULL;

    head = del_random(head, 2);

    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}