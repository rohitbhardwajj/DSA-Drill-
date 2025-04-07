#include <iostream>
using namespace std;

class Node {
public: 
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


// Print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* rev(Node* & head){
    Node* prev = NULL;
    Node* curr = head ; 
    Node* aageWala ;
    
    while(curr!=NULL){
        aageWala = curr->next;
        curr->next = prev;
        prev = curr;
        curr = aageWala;
    }

    head = prev; // update the actual head
    return head;
}


int main() {
    Node* head = new Node(12);
    head->next = new Node(25);
    head->next->next = new Node(40);
    Node* tail = head->next->next;

    printList(head);
    rev(head);
    cout<<endl;
printList(head);
    cout << "Head is = " << head->data << endl;
    cout << "Tail is = " << tail->data << endl;

    return 0;
}
