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

Node* mid(Node* &head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}



int main() {
    Node* head = new Node(12);
    head->next = new Node(25);
    head->next->next = new Node(40);
    Node* tail = head->next->next;

    printList(head);
    Node* ans = mid(head);
    cout<<"mid = "<<ans->data<<endl;
    cout<<endl;
printList(head);
    cout << "Head is = " << head->data << endl;
    cout << "Tail is = " << tail->data << endl;

    return 0;
}
