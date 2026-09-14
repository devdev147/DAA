#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to detect cycle
int detectCycle(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;           // Move 1 step
        fast = fast->next->next;     // Move 2 steps

        if (slow == fast) {
            return 1;                // Cycle found
        }
    }

    return 0;                        // No cycle
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Create nodes
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    fourth = malloc(sizeof(struct Node));

    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Create a cycle:
    fourth->next = second;

    if (detectCycle(head)) {
        printf("Cycle detected\n");
    } else {
        printf("No cycle\n");
    }

    return 0;
}
