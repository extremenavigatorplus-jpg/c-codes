#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node* next;
};

struct node* top = NULL;
int count = 0;

void push(int x) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->data = x;
    new_node->next = top;
    top = new_node;
    count++;
}

int pop() {
    if (top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    struct node* temp = top;
    int popped = temp->data;
    top = top->next;
    free(temp);
    count--;
    return popped;
}

int peek() {
    if (top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    return top->data;
}

void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct node* temp = top;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void isEmpty() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }
}

void Count() {
    printf("Number of elements in the stack: %d\n", count);
}

void reverse() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct node* prev = NULL;
    struct node* curr = top;
    struct node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    top = prev;
    printf("Stack reversed successfully\n");
}

int main() {
    int x;
    int option = 0;

    while (option != -1) {
        printf("\n\tStack operations:\t\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Is Empty\n6. Count\n7. Reverse\n8. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &x);
                push(x);
                break;

            case 2:
                x = pop();
                if (x != -1)
                    printf("%d value removed successfully\n", x);
                break;

            case 3:
                x = peek();
                if (x != -1)
                    printf("%d is top value\n", x);
                break;

            case 4:
                display();
                break;

            case 5:
                isEmpty();
                break;

            case 6:
                Count();
                break;

            case 7:
                reverse();
                break;

            case 8:
                option = -1;
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}

