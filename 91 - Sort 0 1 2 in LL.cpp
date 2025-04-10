#include <iostream>
#include <map>
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


Node* sort(Node* &head){
    Node* temp = head;
    int count0 =0;
    int count1 =0;
    int  count2 =0;
    
    while(temp!=NULL){
        if(temp->data ==0) count0++;
        else if(temp->data ==1) count1++;
        else  count2++;
        temp = temp->next;
    }
    
    temp = head;
    while(temp!=NULL){
        if(count0>0){
            temp->data = 0;
            count0--;
            temp= temp->next;
        }else if(count1>0){
            temp->data = 1;
            count1--;
                 temp= temp->next;
        }else{
             temp->data = 2;
            count2--;
                 temp= temp->next;
        }
    }
    return head;
}



int main() {
    Node* head = new Node(2);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(0);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(0);

    cout << "Original Linked List: ";
    print(head);
    sort(head);
    cout<<endl;
     print(head);
  

    return 0;
}


// approach----------------------------------------2





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

Node* sort(Node* &head) {
    Node* temp0 = new Node(-1);
    Node* temp00 = temp0;
    Node* temp1 = new Node(-1);
    Node* temp11 = temp1;
    Node* temp2 = new Node(-1);
    Node* temp22 = temp2;

    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == 0) {
            temp00->next = temp;
            temp00 = temp00->next;
        } else if (temp->data == 1) {
            temp11->next = temp;
            temp11 = temp11->next;
        } else {
            temp22->next = temp;
            temp22 = temp22->next;
        }
        temp = temp->next;
    }

    // Link them properly
    temp00->next = temp1->next;
    temp11->next = temp2->next;
    temp22->next = NULL;  // last node should end with NULL

    return temp0->next;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(0);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(0);

    cout << "Original Linked List: ";
    print(head);
    
    head = sort(head);  // VERY IMPORTANT: update head

    cout << "Sorted Linked List: ";
    print(head);

    return 0;
}

