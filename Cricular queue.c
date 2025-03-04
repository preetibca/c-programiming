#include<stdio.h> 
#include<stdlib.h> 
#define maxsize 5 

void insert(); 
void delete(); 
void display(); 

int front = -1, rear = -1; 
int queue[maxsize]; 

void main () { 
    int choice; 
    while(1) {
        printf("\n1. Insert an element\n2. Delete an element\n3. Display the queue\n4. Exit\n"); 
        printf("\nEnter your choice: "); 
        scanf("%d", &choice); 
        
        switch(choice) { 
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
                exit(0); 
            default: 
                printf("\nEnter a valid choice!\n"); 
        } 
    } 
} 

void insert() { 
    int item; 
    
    // Check for overflow condition
    if ((front == 0 && rear == maxsize - 1) || (front == rear + 1)) { 
        printf("\nQueue is OVERFLOW\n"); 
        return; 
    } 
    if (front == -1) { // First element insertion
        front = 0; 
    } 
    rear = (rear + 1) % maxsize; // Circular increment of rear
    
    printf("\nEnter the element: "); 
    scanf("%d", &item); 
    queue[rear] = item; 
    printf("\nValue inserted!\n"); 
} 

void delete() { 
    int item; 
    
    // Check for underflow condition
    if (front == -1) { 
        printf("\nQueue is UNDERFLOW\n"); 
        return; 
    } else { 
        item = queue[front]; 
        
        if (front == rear) { // If only one element was present
            front = -1; 
            rear = -1; 
        } else { 
            front = (front + 1) % maxsize; // Circular increment of front
        } 
        printf("\n%d is deleted\n", item); 
    } 
} 

void display() { 
    int i; 
    if (front == -1) { 
        printf("\nQueue is empty\n"); 
        return; 
    } 
    printf("\nQueue elements are:\n"); 
    
    if (front <= rear) { 
        for (i = front; i <= rear; i++) 
            printf("%d ", queue[i]); 
    } else { 
        for (i = front; i < maxsize; i++) 
            printf("%d ", queue[i]); 
        for (i = 0; i <= rear; i++) 
            printf("%d ", queue[i]); 
    } 
    printf("\n"); 
}

