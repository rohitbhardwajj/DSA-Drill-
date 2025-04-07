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


void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(12);
    head->next = new Node(25);
    head->next->next = new Node(40);

    printList(head); 

    return 0;
}
