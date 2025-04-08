#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head ; 
    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
}

Node* revKthGroup(Node* &head , int position){

    if(head == NULL){
        return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* aagewala ;
    int count=0;

    while(count < position && curr != NULL){
        aagewala = curr->next;
        curr->next = prev;
        prev = curr;
        curr = aagewala;
        count++;
    }

   
    if(aagewala != NULL){
        head->next = revKthGroup(aagewala, position);
    }

    return prev;
}

int main()
{
    Node* head = new Node(12);
    head->next = new Node(15);
    head->next->next = new Node(19);
    head->next->next->next = new Node(45);
    head->next->next->next->next = new Node(88);
    
    cout<<"Head is = "<<head->data<<endl;
    print(head);

    cout<<endl<<"After reverse : ";
    head = revKthGroup(head , 3);  // head update jaruri
    print(head);

    return 0;
}
