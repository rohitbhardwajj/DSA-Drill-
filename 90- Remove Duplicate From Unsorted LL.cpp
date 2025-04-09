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
Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* RemoveDupl(Node* &head){
    Node* fix = head;
    
    while(fix != NULL && fix->next != NULL){
        Node* prev = fix;
        Node* repeat = fix->next;

        while(repeat != NULL){
            if(fix->data == repeat->data){
                prev->next = repeat->next;  // remove duplicate
                repeat = repeat->next;
            } else {
                prev = repeat;
                repeat = repeat->next;
            }
        }
        fix = fix->next;
    }
    return head;
}





int main() {
    Node* head = new Node(12);
    head->next = new Node(10);
    head->next->next = new Node(12);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(12);


    cout << "Head is = " << head->data << endl;
    print(head);
    RemoveDupl(head);
    cout<<endl;
     print(head);

    
    return 0;
}
