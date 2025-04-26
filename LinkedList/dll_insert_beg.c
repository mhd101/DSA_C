#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node* insert_beg(struct node *head, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = head;
    head->prev = temp;
    head = temp; // make the temp node head
    return head;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    

    head->prev = NULL;
    head->data = 1;
    head->next = NULL;

    head = insert_beg(head, 2);

    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

}