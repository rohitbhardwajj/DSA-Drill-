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

// Insert at head
Node* inserAtHead(Node* &head , int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    return head;
}

// Insert at tail
Node* inserAtTail(Node* &head , int data , Node* &tail) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
    return head;
}

// Insert at particular index
Node* insertAtParticularIndex(Node*& head, int data, int idx) {
    if (idx == 1) {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
        return head;
    }

    Node* temp = new Node(data);
    Node* prev = head;
    int count = 1;

    while (count < idx - 1 && prev != NULL) {
        prev = prev->next;
        count++;
    }

    if (prev == NULL) {
        cout << "Index out of bounds!" << endl;
        return head;
    }

    temp->next = prev->next;
    prev->next = temp;

    return head;
}

// Delete at particular index
Node* deleteAtParticularIndex(Node* &head, int idx) {
    if (idx == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* prev = head;
    int count = 1;

    while (count < idx - 1 && prev != NULL) {
        prev = prev->next;
        count++;
    }

    if (prev == NULL || prev->next == NULL) {
        cout << "Index out of bounds!" << endl;
        return head;
    }

    Node* target = prev->next;
    prev->next = target->next;
    delete target;

    return head;
}

// Print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(12);
    head->next = new Node(25);
    head->next->next = new Node(40);
    Node* tail = head->next->next;

    inserAtHead(head, 22);
    inserAtHead(head, 21);

    inserAtTail(head, 99, tail);
    insertAtParticularIndex(head, 100, 3); // Insert at index 3

    cout << "Before deletion:" << endl;
    printList(head);

    head = deleteAtParticularIndex(head, 3); // Delete index 3

    cout << "After deletion at index 3:" << endl;
    printList(head);

    cout << "Head is = " << head->data << endl;
    cout << "Tail is = " << tail->data << endl;

    return 0;
}
