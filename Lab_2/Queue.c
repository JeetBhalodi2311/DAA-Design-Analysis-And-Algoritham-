#include <stdio.h>
#define SIZE 100 

int queue[SIZE], front = -1, rear = -1;

void insert() {
    int value;
    if (rear == SIZE - 1) {
        printf("Queue is full!\n");
        return;
    }
    printf("Enter value to insert: ");
    scanf("%d", &value);
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = value;
}

void delete() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Deleted element: %d\n", queue[front]);
    front++;
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                insert();  
                break;
                
            case 2: 
                delete(); 
                break;
                
            case 3: 
                display(); 
                break;

            case 4: 
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
}