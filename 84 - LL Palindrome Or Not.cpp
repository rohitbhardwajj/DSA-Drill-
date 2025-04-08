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
    
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* aagewala;
    
    while(curr!=NULL){
        aagewala=curr->next;
        curr->next = prev;
        prev = curr;
        curr =aagewala;
    }
    return prev;
}

bool CheckPalindrome(Node* &head){
    if(head == NULL || head->next == NULL) return true;

    Node* mid = findMid(head);
    Node* secondHalfStart = reverse(mid->next);

    Node* first = head;
    Node* second = secondHalfStart;

    while(second != NULL){
        if(first->data != second->data){
            return false;
        }
        first = first->next;
        second = second->next;
    }

    mid->next = reverse(secondHalfStart);

    return true;
}




int main() {
    Node* head = new Node(12);
    head->next = new Node(15);
    head->next->next = new Node(19);
    head->next->next->next = new Node(15);
    head->next->next->next->next = new Node(12);


    cout << "Head is = " << head->data << endl;
    print(head);
    
    bool ans = CheckPalindrome(head);
    cout<<endl;
    if(ans) cout<<"Yes it is a palindrome linkedlist";
     else cout<<"Not a palindrome LL";
    return 0;
}
