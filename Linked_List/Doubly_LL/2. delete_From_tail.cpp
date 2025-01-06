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
    if (head != nullptr) {  // If the list is not empty
        head->prev = temp;
    }
    head = temp;
    
}

void deletefromtail(Node* &head) {
    if (head == nullptr) {  // If the list is empty, there's nothing to delete
        return;
    }

    if (head->next == nullptr) {  // If there's only one node in the list
        delete head;
        head = nullptr;
        return;
    }

    Node* tail = head;
    while (tail->next != nullptr) {  // Traverse to the last node
        tail = tail->next;
    }

    Node* newTail = tail->prev;
    newTail->next = nullptr;  // Update the new tail's next to nullptr

    delete tail;  // Free the memory of the old tail
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {  
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(5);
    
    insertathead(4,head);
    insertathead(3,head);
    insertathead(2,head);
    insertathead(1,head);
    deletefromtail(head);
    
    
    printLL(head);
    return 0;
}