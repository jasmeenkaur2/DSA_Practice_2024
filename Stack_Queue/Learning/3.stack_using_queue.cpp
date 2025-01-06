#include<bits/stdc++.h> // Include all standard C++ libraries
using namespace std;

// Class to implement Stack using a queue
class Stack {
    queue<int> q;  // Internal queue to simulate the stack behavior

public:
    // Function to push an element onto the stack
    // It adds the new element to the queue and rearranges the queue to maintain stack order
    void Push(int x) {
        int s = q.size();  // Get the current size of the queue
        q.push(x);         // Add the new element to the queue

        // Move all previously pushed elements behind the new element to simulate stack behavior
        for (int i = 0; i < s; i++) {
            q.push(q.front()); // Move the front element to the back of the queue
            q.pop();           // Remove the front element
        }
    }

    // Function to pop (remove) the top element from the stack
    int Pop() {
        int n = q.front();  // Get the front element (top of the stack)
        q.pop();            // Remove it from the queue
        return n;           // Return the popped element
    }

    // Function to get the top element of the stack without removing it
    int Top() {
        return q.front();   // Return the front element, which is the top of the stack
    }

    // Function to get the current size of the stack
    int Size() {
        return q.size();    // Return the size of the queue (which represents the stack size)
    }
};

int main() {
    Stack s;  // Create a stack object

    // Push elements onto the stack
    s.Push(3);
    s.Push(2);
    s.Push(4);
    s.Push(1);

    // Display the top element of the stack
    cout << "Top of the stack: " << s.Top() << endl;

    // Display the size of the stack before popping an element
    cout << "Size of the stack before removing element: " << s.Size() << endl;

    // Pop an element and display it
    cout << "The deleted element is: " << s.Pop() << endl;

    // Display the top element after popping
    cout << "Top of the stack after removing element: " << s.Top() << endl;

    // Display the size of the stack after popping
    cout << "Size of the stack after removing element: " << s.Size() << endl;

    return 0;
}
