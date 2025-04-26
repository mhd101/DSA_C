#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

int main() {
    // creating nodes
    struct node *firstNode = malloc(sizeof(struct node));
    struct node *secondNode =  malloc(sizeof(struct node));
    struct node *thirdNode =  malloc(sizeof(struct node));

    // assigning data to nodes
    firstNode->data = 1;
    secondNode->data = 2;
    thirdNode->data = 3;

    // connecting the nodes
    firstNode->prev = NULL;
    firstNode->next = secondNode;

    secondNode->prev = firstNode;
    secondNode->next = thirdNode;

    thirdNode->prev = secondNode;
    thirdNode->next = NULL;
    
    // printing the list forward
    struct node *temp = firstNode;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    // printing the list backward
    temp = thirdNode;
    while(temp!= NULL){
        printf("%d ", temp->data);
        temp = temp->prev;
    }

}