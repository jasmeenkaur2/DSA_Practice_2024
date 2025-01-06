#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data, Node* next = nullptr){
        this -> data = data;
        this -> next = next;
    }
};

void insertathead(int data,Node* &head){
    Node* temp = new Node(data,head);
    head  = temp;
}

void deletefromfront(Node* &head){
    Node* temp = head;
    head = head -> next;
    delete temp;
}

void deletefromback(Node* &head){
    Node* temp = head;
    while(temp -> next -> next != nullptr){
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = nullptr;
    
}

void deletefromposition(Node* &head, int data) {
    if (head == nullptr) {
        // The list is empty, nothing to delete
        return;
    }

    // If the node to be deleted is the head node
    if (head->data == data) {
        Node* temp = head;
        head = head->next; // Move the head to the next node
        delete temp; // Delete the old head
        return;
    }

    Node* temp = head;
    Node* temp_next = head->next;

    // Traverse the list to find the node with the matching data
    while (temp_next != nullptr && temp_next->data != data) {
        temp = temp_next;
        temp_next = temp_next->next;
    }

    // If the data was found in the list
    if (temp_next != nullptr) {
        temp->next = temp_next->next; // Bypass the node to be deleted
        delete temp_next; // Delete the node
    }
    // If temp_next is nullptr, it means the data was not found, 
    // and nothing is deleted, which is the expected behavior.
}


void printLL(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout <<temp-> data<<endl;
        temp = temp -> next;
    }
}

int main() {
    Node* head = new Node(1);
    
    insertathead(2, head);
    insertathead(3, head);
    insertathead(4, head);
    insertathead(5, head);
    insertathead(6, head);
    insertathead(7, head);
    
    deletefromfront(head);
    deletefromback(head);
    deletefromposition(head,3);
    
    
    printLL(head);
    
    return 0;
}
