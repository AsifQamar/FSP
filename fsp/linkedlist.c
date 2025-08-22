#include <stdio.h>
#include <stdlib.h>

// Define structure
struct Node {
    int data;
    struct Node* next;
};

// Head pointer
struct Node* head = NULL;

// Insert at beginning
void insertAtBeginning() {
    int value;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("Node inserted at beginning.\n");
}

// Insert at end
void insertAtEnd() {
    int value;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    printf("Node inserted at end.\n");
}

// Insert at specific position
void insertAtPosition() {
    int value, position, i;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &value);
    printf("Enter position (1 for beginning): ");
    scanf("%d", &position);

    newNode->data = value;
    newNode->next = NULL;

    if (position <= 0) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        printf("Node inserted at position 1.\n");
        return;
    }

    struct Node* temp = head;
    for (i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    printf("Node inserted at position %d.\n", position);
}

// Delete from beginning
void deleteAtBeginning() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    printf("Deleted node with value %d from beginning.\n", temp->data);
    free(temp);
}

// Delete from end
void deleteAtEnd() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (head->next == NULL) {
        printf("Deleted node with value %d from end.\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    printf("Deleted node with value %d from end.\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

// Delete at specific position
void deleteAtPosition() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    int position, i;
    printf("Enter position to delete (1 for beginning): ");
    scanf("%d", &position);

    if (position <= 0) {
        printf("Invalid position!\n");
        return;
    }

    if (position == 1) {
        struct Node* temp = head;
        head = head->next;
        printf("Deleted node with value %d from position 1.\n", temp->data);
        free(temp);
        return;
    }

    struct Node* temp = head;
    for (i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range.\n");
        return;
    }

    struct Node* delNode = temp->next;
    temp->next = delNode->next;
    printf("Deleted node with value %d from position %d.\n", delNode->data, position);
    free(delNode);
}

// Display the list
void displayList() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function with switch-case
int main() {
    int choice;

    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at End\n");
        printf("6. Delete at Position\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertAtBeginning(); break;
            case 2: insertAtEnd(); break;
            case 3: insertAtPosition(); break;
            case 4: deleteAtBeginning(); break;
            case 5: deleteAtEnd(); break;
            case 6: deleteAtPosition(); break;
            case 7: displayList(); break;
            case 8: printf("Exiting program.\n"); exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
