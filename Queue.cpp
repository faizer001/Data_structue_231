#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow!" << endl;
    }
    else {
        if (front == -1) front = 0;
        rear++;
        queueArr[rear] = value;
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow!" << endl;
        return -1;
    }
    else {
        int val = queueArr[front];
        front++;
        return val;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
    }
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queueArr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int value;

    cout << "Enter 5 values for the queue:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> value;
        enqueue(value);
    }

    cout << "\nAfter enqueueing:\n";
    display();
    int removeCount;
    cout << "\nHow many values do you want to remove : ";
    cin >> removeCount;

    cout << "\nRemoving values.\n";
    for (int i = 0; i < removeCount; i++) {
        int removed = dequeue();
        if (removed != -1) {
            cout << "Removed: " << removed << endl;
        }
    }

    cout << "\nQueue after removal:\n";
    display();

    return 0;
}
