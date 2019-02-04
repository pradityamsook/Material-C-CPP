#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void rearrange(struct Node *odd) {
    if (odd == NULL || odd->next == NULL || odd->next->next == NULL)
        return;

    struct Node *even = odd->next;
    odd->next = odd->next->next;
    odd = odd->next;
    even->next = NULL;

    while (odd && odd->next) {
        struct Node *temp = odd->next->next;
        odd->next = temp;

        if (temp != NULL)
            odd = temp;
    }

    odd->next = even;
}

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node *start = NULL;

    push(&start, 7);
    push(&start, 10);
    push(&start, 11);
    push(&start, 8);
    push(&start, 4);

    printf("\n Linked list before calling rearrange() ");
    printList(start);

    rearrange(start);

    printf("\n Linked list after calling rearrange() ");
    printList(start);

    return 0;
}



// https://www.geeksforgeeks.org/given-linked-list-reverse-alternate-nodes-append-end/
