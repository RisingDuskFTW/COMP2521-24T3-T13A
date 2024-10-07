#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Given a linked list, free all nodes
void freeList(struct node *head) {
    // Case 1: list is empty
    if (head == NULL) {
        return;
    }

    // Case 2: list is not empty
    struct node *temp = head;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// Given a linked list, print all nodes in the list
void printList(struct node *head) {
    struct node *curr = head;
    while (curr->next != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }

    printf("%d\n", curr->data);
    return;
}

// Given a linked list, append a new node with value `data` to the end of the list
struct node *appendList(struct node *head, int data) {
    // Create the new node
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    // Case 1: list is empty
    if (head == NULL) {
        head = newNode;
    } else {
        // Case 2: list is not empty
        struct node *lastNode = head;
        while (lastNode->next != NULL) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
    return head;
}

int main(void) {
    struct node *head = NULL;
    head = appendList(head, 1);
    head = appendList(head, 2);
    head = appendList(head, 3);
    head = appendList(head, 4);
    printList(head);
    freeList(head);
    return 0;
}
