#include <stdio.h>
#define MAX 5

int queue[MAX], front = 0, rear = -1, size = 0;

void enqueue(int val) { 
    if (size < MAX) queue[++rear % MAX] = val, size++; 
}

int dequeue() { 
    return (size > 0) ? queue[front++ % MAX], size-- : -1; 
}

void display() {
    for (int i = 0; i < size; i++) printf("%d ", queue[(front + i) % MAX]);
    printf("\n");
}

int main() {
    enqueue(10); enqueue(20); enqueue(30); display();
    dequeue(); display();
    enqueue(40); display();
    return 0;
}
