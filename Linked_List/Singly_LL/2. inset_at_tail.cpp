#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    // Constructor for a node
    Node(int data, Node* next = nullptr) {
        this->data = data;
        this->next = next;
    }
};

void insertathead(int data, Node* &head) {
    Node* temp = new Node(data, head);  // Create new node with next pointing to current head
    head = temp;  // Update head to the new node
}

void insertattail(int data, Node* & head){
    Node* temp = head;
    while(temp -> next != nullptr){
        temp = temp -> next;
    }
    temp -> next = new Node(data);
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {  
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(1);
    
    insertathead(3, head);
    insertathead(5, head);
    insertattail(6,head);
    
    printLL(head);
    
    return 0;
}
