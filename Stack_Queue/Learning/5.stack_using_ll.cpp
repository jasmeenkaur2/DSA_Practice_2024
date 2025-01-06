#include<iostream>
using namespace std;

// Define a class to represent a node in the stack
class StackNode {
public:
    int data; // Data part of the node
    StackNode* next; // Pointer to the next node in the stack

    // Constructor to initialize a node with data and set the next pointer to NULL
    StackNode(int d) {
        data = d;
        next = NULL;
    }
};

// Define a class to represent the stack
class Stack {
private:
    StackNode* top; // Pointer to the top node of the stack
    int size; // To keep track of the number of elements in the stack

public:
    // Constructor to initialize an empty stack
    Stack() {
        top = NULL;
        size = 0;
    }

    // Method to push an element onto the stack
    void stackPush(int x) {
        StackNode* element = new StackNode(x); // Create a new node with the data
        element->next = top; // Link the new node to the current top node
        top = element; // Update the top pointer to the new node
        cout << "Element pushed" << "\n";
        size++; // Increment the size of the stack
    }

    // Method to pop an element from the stack
    int stackPop() {
        if (top == NULL) { // If stack is empty
            return -1; // Return -1 to indicate an error
        }
        int topData = top->data; // Store the data from the top node
        StackNode* temp = top; // Store the top node in a temporary pointer
        top = top->next; // Update the top pointer to the next node
        delete temp; // Delete the old top node
        size--; // Decrease the size of the stack
        return topData; // Return the popped data
    }

    // Method to get the size of the stack
    int stackSize() {
        return size;
    }

    // Method to check if the stack is empty
    bool stackIsEmpty() {
        return top == NULL;
    }

    // Method to peek at the top element without removing it
    int stackPeek() {
        if (top == NULL) return -1; // If stack is empty, return -1
        return top->data; // Return the data from the top node
    }

    // Method to print the elements of the stack
    void printStack() {
        StackNode* current = top; // Start from the top node
        while (current != NULL) { // Traverse the stack until the last node
            cout << current->data << " "; // Print the data of the current node
            current = current->next; // Move to the next node
        }
    }
};

int main() {
    Stack s; // Create a stack object
    s.stackPush(10); // Push element 10 onto the stack
    cout << "Element popped: " << s.stackPop() << "\n"; // Pop the top element
    cout << "Stack size: " << s.stackSize() << "\n"; // Print the size of the stack
    cout << "Stack empty or not? " << s.stackIsEmpty() << "\n"; // Check if the stack is empty
    cout << "Stack's top element: " << s.stackPeek() << "\n"; // Peek at the top element of the stack
    return 0;
}
