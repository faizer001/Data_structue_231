#include <iostream>
using namespace std;

#define SIZE 7

int stackArr[SIZE];
int top = -1;


void push(int value) {
    if (top == SIZE - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stackArr[top] = value;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Top to Bottom: ";
        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int value;

    cout << "Enter 5 values for the stack:" << endl;


    for (int i = 0; i < SIZE; i++) {
        cin >> value;
        push(value);
    }


    display();

    return 0;
}
