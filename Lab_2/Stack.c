#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack[top] = value;
    printf("%d pushed onto stack.\n", value);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return;
    }
    printf("%d popped from stack.\n", stack[top--]);
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

void change(int i, int data)
{
    if (top - i + 1 < 0)
    {
        printf("not found");
    }
    else
    {
        stack[top - i + 1] = data;
    }
}

int peep(int i)
{
    if ((top - i + 1) < 0)
    {
        printf("not found");
    }
    else
    {
        return top - i + 1;
    }
}

void printStack()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}

int main()
{
    int choice, value, index;
    while (1)
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Peep\n5. Change\n6. Display\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;

        case 4:
            printf("Enter Index : ");
            scanf("%d", &index);
            printf("%d", peep(index));
            break;

        case 5:
            printf("Enter Index : ");
            scanf("%d", &index);
            printf("Enter value to change: ");
            scanf("%d", &value);
            change(index, value);
            break;
        case 6:
            printStack();
            printf("\n");
            break;
        case 7:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice. Try again!\n");
        }
    }
}