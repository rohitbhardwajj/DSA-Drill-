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
    cout << endl;
}

Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* left, Node* right){
    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            left = left->next;
        } else {
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }

    while(left != NULL){
        temp->next = left;
        left = left->next;
        temp = temp->next;
    }
    while(right != NULL){
        temp->next = right;
        right = right->next;
        temp = temp->next;
    }

    return dummy->next;
}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* mid = findMid(head);
    Node* right = mid->next;
    mid->next = NULL;

    Node* leftSorted = mergeSort(head);
    Node* rightSorted = mergeSort(right);

    return merge(leftSorted, rightSorted);
}

int main() {
    Node* head = new Node(12);
    head->next = new Node(15);
    head->next->next = new Node(19);
    head->next->next->next = new Node(15);
    head->next->next->next->next = new Node(12);

    cout << "Original Linked List: ";
    print(head);

    head = mergeSort(head);

    cout << "Sorted Linked List: ";
    print(head);

    return 0;
}
