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

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


bool isCircularOrNot(Node* head) {
    if (head == NULL)
        return false;

    Node* temp = head->next;
    while (temp != NULL && temp != head) {
        temp = temp->next;
    }

    return (temp == head);
}

int main() {
    Node* head = new Node(12);
    head->next = new Node(15);
    head->next->next = new Node(19);
    head->next->next->next = new Node(45);
    head->next->next->next->next = new Node(88);


    cout << "Head is = " << head->data << endl;
    print(head);

    cout << endl;
    bool ans = isCircularOrNot(head);

    if (ans) {
        cout << "Yes, loop is present (circular list)";
    } else {
        cout << "Loop is not present";
    }

    return 0;
}
