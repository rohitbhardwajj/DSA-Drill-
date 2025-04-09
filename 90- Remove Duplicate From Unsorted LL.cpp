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



// approach--------------------2 using map



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

// Function to print linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to remove duplicate values using map
Node* RemoveDupl(Node* &head) {
    if (head == NULL) return NULL;

    map<int, bool> seen;
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL) {
        if (seen[curr->data]) {
            // Duplicate value found, remove the node
            prev->next = curr->next;
            // Optional: delete curr; // to free memory
        } else {
            // First time seeing this value
            seen[curr->data] = true; 
            prev = curr;
        }
        curr = curr->next;
    }

    return head;
}

// Main function
int main() {
    Node* head = new Node(12);
    head->next = new Node(10);
    head->next->next = new Node(12);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(12);

    cout << "Original Linked List: ";
    print(head);

    RemoveDupl(head);

    cout << "After Removing Duplicates: ";
    print(head);

    return 0;
}


// approach---------------------------------3

// first sort and then remove just like sorted Linkedlist