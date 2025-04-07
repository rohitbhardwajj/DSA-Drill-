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

Node* inserAtHead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next = head;
    head=temp;
    return head;
}
Node* inserAtTail(Node* &head , int data , Node* &tail){
      Node* temp = new Node(data);
       tail->next = temp ;
       tail = temp;
       return head;
}
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
     Node* tail = head->next->next;
    inserAtHead(head , 22);
    inserAtHead(head , 21);

     inserAtTail(head , 99 , tail);
     insertAtParticularIndex(head ,100 , 3);
      printList(head); 
      cout<<"head is = "<<head->data<<endl;
      cout<<"Tail is = "<<tail->data;
    return 0;
}
