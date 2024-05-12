#include "lab_26.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the list
Node* insertEnd(Node* head, int data) {
    Node* newNode = createNode(data);

    if (head == NULL) {
        return newNode;
    }

    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    return head;
}

void bubbleHelp(Node **ptr, int *temp, int *swapped) {
    if ((*ptr)->data > (*ptr)->next->data) {
        *temp = (*ptr)->data;
        (*ptr)->data = (*ptr)->next->data;
        (*ptr)->next->data = *temp;
        *swapped = 1;
    }
}


// Bubble sort function for linked list
void bubbleSort(Node* head) {
    int swapped, temp = 0;
    Node* ptr;
    Node* lptr = NULL;

    if (head == NULL) {
        return;
    }

    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != lptr) {
            bubbleHelp(&ptr, &temp, &swapped);
            ptr = ptr->next;
        }
        lptr = ptr;
    } while (swapped);
}

void deleteNode(Node** head_ref, int position) {
    if (*head_ref == NULL) {
        return;
    }

    Node* temp = *head_ref;

    // Если удаляемый элемент - первый
    if (position == 0) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Найти предыдущий узел i-го узла
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    // Если i больше длины списка, не делаем ничего
    if (temp == NULL || temp->next == NULL) {
        return;
    }

    // Удаление узла, соединение предыдущего узла с последующим
    Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

void replaceNodeAtIndex(Node* head, int index, int new_data) {
    Node* current = head;
    int i = 0;
    while (current != NULL && i < index) {
        current = current->next;
        i++;
    }

    if (current == NULL) {
        printf("Индекс превышает длину списка\n");
        return;
    }

    current->data = new_data;
}

void insertAfterIndex(Node** head_ref, int index, int new_data) {
    if (*head_ref == NULL) {
        printf("Список пуст\n");
        return;
    }

    Node* current = *head_ref;
    int i = 0;
    while (current != NULL && i < index) {
        current = current->next;
        i++;
    }

    if (current == NULL) {
        printf("Индекс превышает длину списка\n");
        return;
    }

    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Ошибка выделения памяти\n");
        exit(1);
    }

    new_node->data = new_data;
    new_node->next = current->next;
    current->next = new_node;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to free memory allocated for the linked list
void freeList(Node* head) {
    Node* temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;

    char command[100];
    int pos;
    int value;
    int c;
    do {
        printf("Options: \n");
        printf("1. Add element\n");
        printf("2. Insert element after index\n");
        printf("3. Delete element\n");
        printf("4. Replace element by index\n");
        printf("5. Sort list\n");
        printf("6. Print list\n");
        printf("7. Exit\n");
        printf("\nChoose option: ");
        c = getchar();
        if (c == '1') {
            printf("\nEnter number: ");
            scanf("%d", &value);
            head = insertEnd(head, value);
        } else if (c == '2') {
            printf("\nEnter index: ");
            scanf("%d", &pos);
            printf("Enter number: ");
            scanf("%d", &value);
            insertAfterIndex(&head, pos, value);
        } else if (c == '3') {
            printf("\nEnter index: ");
            scanf("%d", &pos);
            deleteNode(&head, pos);
        } else if (c == '4') {
            printf("\nEnter index: ");
            scanf("%d", &pos);
            printf("Enter number: ");
            scanf("%d", &value);
            replaceNodeAtIndex(head, pos, value);
        } else if (c == '5') {
            bubbleSort(head);
        } else if (c == '6') {
            printList(head);
        } else if (c == '7' || c == EOF) {
            printf("Goodbye!\n");
            freeList(head);
            break;
        } else {
            printf("Wrong option!\n");
        }
        while (c != '\n') {
            c = getchar();
        }
    } while (c != '5');
}