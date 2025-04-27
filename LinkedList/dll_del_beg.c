#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node* del_beg(struct node *head){

    if(head == NULL){
        printf("List is empty!!");
    } else if(head->next == NULL){
        free(head);
        head = NULL;
    } else {
        struct node *temp = head;
        temp = temp->next;
        free(head);
        head = temp;
        return head;
    }
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

    head = del_beg(head);

    struct node *ptr = head;

    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }   
}