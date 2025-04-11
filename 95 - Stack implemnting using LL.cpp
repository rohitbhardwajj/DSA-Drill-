#include <iostream>
using namespace std;

// Node for the stack
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Stack using linked list
class Stack {
private:
    Node* top;
    int size;
    int capacity;

public:
    Stack(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        this->top = NULL;
    }

    void push(int val) {
        if (size >= capacity) {
            cout << "Stack Overflow" << endl;
            return;
        }

        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        size++;
        cout << val << " pushed to stack\n";
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow" << endl;
            return;
        }

        cout << top->data << " popped from stack\n";
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack s(3);
    s.push(33);
    s.push(44);
    s.push(55);
    s.push(66); // Will overflow

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop(); // Will underflow

    return 0;
}
