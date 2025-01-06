#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* prev;
  
  Node(int data){
      this -> data = data;
      this -> next = nullptr;
      this -> prev = nullptr;
  }
};

void insertathead(int data,Node* &head){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
    
}

void insertatback(int data,Node* &head){
    Node* node1 = new Node(data);
    Node* temp = head;
    while(temp -> next != nullptr){
        temp = temp -> next;
    }
    temp -> next = node1;
    node1 -> prev = temp;
}

void insertatposition(int data, int pos, Node* &head) {
    Node* node2 = new Node(data);  // Create a new node with the given data

    if (pos == 1) {  // If inserting at the head (pos == 1)
        node2->next = head;
        if (head != nullptr) {
            head->prev = node2;
        }
        head = node2;
        return;
    }

    Node* move = head;
    int count = 1;

    while (move != nullptr && count < pos) {
        move = move->next;
        count++;
    }

    if (move == nullptr || (move->next == nullptr && count < pos - 1)) {
        // If position is out of bounds
        std::cout << "Position out of bounds" << std::endl;
        delete node2;  // Prevent memory leak
        return;
    }

    // Inserting in the middle or at the end
    node2->next = move->next;  // Set new node's next to current node's next
    if (move->next != nullptr) {  // If not inserting at the end
        move->next->prev = node2;  // Update the next node's previous pointer
    }
    move->next = node2;  // Link current node to the new node
    node2->prev = move;  // Link new node's previous to the current node
}
void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {  
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(3);
    
    insertathead(2,head);
    insertathead(1,head);
    insertatback(4,head);
    insertatposition(5,4,head);
    
    printLL(head);
    return 0;
}