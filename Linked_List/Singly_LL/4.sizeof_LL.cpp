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



void printLL(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != nullptr){
        count++;
        cout <<temp-> data<<endl;
        temp = temp -> next;
    }
    
    cout<<"the size of linked list is:"<<count<<endl;
}

int main() {
    Node* head = new Node(1);
    
    insertathead(2, head);
    insertathead(3, head);
    insertathead(4, head);
    insertathead(5, head);
    insertathead(6, head);
    insertathead(7, head);
    
    
    
    printLL(head);
    
    return 0;
}
