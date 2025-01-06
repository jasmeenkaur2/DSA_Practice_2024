#include<bits/stdc++.h>
using namespace std;

class Stack {
    int size;  // Maximum size of the stack
    int *arr;  // Dynamic array to store stack elements
    int top;   // Index of the top element

public:
    // Constructor to initialize the stack
    Stack(int s = 1000) { // Default size is 1000
        top = -1;         // Indicates stack is initially empty
        size = s;
        arr = new int[size]; // Dynamically allocate memory for the stack
    }

    // Destructor to free dynamically allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Push an element onto the stack
    void push(int x) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push " << x << endl;
            return;
        }
        top++;
        arr[top] = x;
        cout << x << " pushed onto the stack." << endl;
    }

    // Pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop." << endl;
            return -1;
        }
        int x = arr[top];
        top--;
        return x;
    }

    // Get the top element of the stack without removing it
    int getTop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    // Get the current number of elements in the stack
    int getSize() {
        return top + 1;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if the stack is full
    bool isFull() {
        return top == size - 1;
    }

    // Display all elements of the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(5); // Create a stack with a maximum size of 5

    // Pushing elements onto the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    // Try pushing onto a full stack
    s.push(6); // This should give a "stack overflow" message

    // Display the current elements of the stack
    s.display();

    // Display stack size and top element
    cout << "Stack size is " << s.getSize() << endl;
    cout << "Stack top is " << s.getTop() << endl;

    // Popping elements from the stack
    cout << s.pop() << " popped from the stack." << endl;
    cout << "Stack size after pop is " << s.getSize() << endl;

    // Display the stack after popping an element
    s.display();

    return 0;
}
