#include<bits/stdc++.h>
using namespace std;

class Queue {
    int front;   // Points to the first element
    int rear;    // Points to the last element
    int size;    // Maximum size of the queue
    int *arr;    // Dynamic array to store queue elements
    int cs;      // Current size of the queue

public:
    // Constructor to initialize the queue
    Queue(int s = 1000) {
        front = 0;         // Initially, the queue is empty, so front points to 0
        rear = -1;         // rear is set to -1 because no element has been added yet
        size = s;          // Set the maximum size of the queue
        arr = new int[size]; // Dynamically allocate array for queue
        cs = 0;            // Initially, the queue is empty
    }

    // Destructor to free dynamically allocated memory
    ~Queue() {
        delete[] arr;
    }

    // Push an element to the back of the queue
    void Push(int x) {
        if (cs == size) {
            cout << "Queue overflow! Cannot push " << x << endl;
            return;
        }
        rear = (rear + 1) % size; // Move rear to the next position
        arr[rear] = x;            // Add the element to the array
        cs++;                     // Increase current size
    }

    // Get the front element of the queue (peek)
    int Top() {
        if (cs == 0) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front]; // Return the element at the front
    }

    // Pop the front element of the queue
    int Pop() {
        if (cs == 0) {
            cout << "Queue underflow! Cannot pop." << endl;
            return -1;
        }
        int x = arr[front];     // Get the front element
        front = (front + 1) % size; // Move front to the next position
        cs--;                   // Decrease current size
        return x;
    }

    // Get the current size of the queue
    int Size() {
        return cs;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return cs == 0;
    }

    // Check if the queue is full
    bool isFull() {
        return cs == size;
    }
};

int main() {
    Queue q(5); // Create a queue with size 5
    q.Push(1);
    q.Push(2);
    q.Push(3);
    q.Push(4);

    cout << "The peek of the queue before deleting any element: " << q.Top() << endl;
    cout << "The size of the queue before deletion: " << q.Size() << endl;

    cout << "The first element to be deleted: " << q.Pop() << endl;
    cout << "The peek of the queue after deleting an element: " << q.Top() << endl;
    cout << "The size of the queue after deleting an element: " << q.Size() << endl;

    return 0;
}
