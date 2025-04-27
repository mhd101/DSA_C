#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

void del_end(struct node *head){
    if(head == NULL){
        printf("List is already Empty!!");
    } else{
        // method 1: using two pointers
        struct node *ptr = head;
        
        // while(ptr->next != NULL){
        //     ptr = ptr->next;
        // }
        // struct node *tmp = ptr->prev;
        // tmp->next = NULL;
        // free(ptr);

        // method 2: using single pointer
        while(ptr->next->next != NULL){
            ptr = ptr->next;
        }
        free(ptr->next);
        ptr->next = NULL;
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

    del_end(head);

    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

}