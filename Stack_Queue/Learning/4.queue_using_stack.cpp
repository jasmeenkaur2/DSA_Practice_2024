#include <iostream>
#include <stack>
using namespace std;

class QueueUsingStack {
    stack<int> input, output; // Two stacks for queue implementation

public:
    // Push an element to the back of the queue
    void Push(int data) {
        input.push(data); // Always push onto the input stack
        cout << "Element pushed: " << data << endl;
    }

    // Remove the front element from the queue
    int Pop() {
        // If the output stack is empty, move all elements from input to output
        if (output.empty()) {
            if (input.empty()) {
                cout << "Queue is empty! Cannot pop." << endl;
                return -1; // Return error code if both stacks are empty
            }
            while (!input.empty()) {
                output.push(input.top()); // Move elements from input to output
                input.pop();
            }
        }
        int val = output.top(); // Get the front element
        output.pop();           // Remove it from the output stack
        return val;
    }

    // Get the front element of the queue
    int Front() {
        if (output.empty()) {
            if (input.empty()) {
                cout << "Queue is empty!" << endl;
                return -1; // Return error code if both stacks are empty
            }
            while (!input.empty()) {
                output.push(input.top()); // Move elements from input to output
                input.pop();
            }
        }
        return output.top(); // Return the front element
    }

    // Get the current size of the queue
    int Size() {
        return input.size() + output.size(); // Total elements in both stacks
    }

    // Check if the queue is empty
    bool isEmpty() {
        return input.empty() && output.empty(); // Both stacks must be empty
    }
};

int main() {
    QueueUsingStack q;

    // Push elements into the queue
    q.Push(10);
    q.Push(20);
    q.Push(30);

    // Display the front element
    cout << "Front of the queue: " << q.Front() << endl;

    // Pop elements from the queue
    cout << "Element popped: " << q.Pop() << endl;

    // Display the front element after popping
    cout << "Front of the queue: " << q.Front() << endl;

    // Display the current size of the queue
    cout << "Current size of the queue: " << q.Size() << endl;

    return 0;
}
