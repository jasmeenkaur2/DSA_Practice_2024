#include <iostream>
using namespace std;

// Node class to represent each element in the doubly linked list
class Node {
public:
    int data;   // Data part of the node
    Node* next; // Pointer to the next node
    Node* prev; // Pointer to the previous node
    
    // Constructor to initialize a new node
    Node(int data, Node* next = nullptr, Node* prev = nullptr) {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

// Function to insert a node at the head of the doubly linked list
void insertAtHead(int data, Node* &head) {
    Node* temp = new Node(data, head); // Create a new node with given data
    if (head != nullptr) {
        head->prev = temp; // Update the previous pointer of the old head
    }
    head = temp; // Update the head to the new node
}

// Function to reverse the doubly linked list
void reverseDLL(Node* &head) {
    Node* temp = nullptr; // Temporary pointer for swapping
    Node* current = head; // Start from the head of the list
    
    // Traverse the entire list
    while (current != nullptr) {
        // Swap the prev and next pointers of the current node
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        
        // Move to the next node in the original list (which is current->prev after swap)
        current = current->prev;
    }
    
    // After the loop, temp will be pointing to the last node's previous node
    // So we update the head to be the last node (new head after reversal)
    if (temp != nullptr) {
        head = temp->prev;
    }
}

// Function to print the doubly linked list
void printLL(Node* &head) {
    Node* temp = head; // Start from the head
    while (temp != nullptr) {
        cout << temp->data << endl; // Print the data
        temp = temp->next; // Move to the next node
    }
}

// Main function to test the reverse function
int main() {
    Node* head = new Node(1); // Create the first node
    
    insertAtHead(2, head); // Insert a node with data 2 at the head
    insertAtHead(3, head); // Insert a node with data 3 at the head
    insertAtHead(4, head); // Insert a node with data 4 at the head
    
    cout << "Original List:" << endl;
    printLL(head); // Print the original list
    
    reverseDLL(head); // Reverse the doubly linked list
    
    cout << "\nReversed List:" << endl;
    printLL(head); // Print the reversed list
    
    return 0;
}
