#include <iostream>
using namespace std;

#define SIZE 100  // Maximum size of stack

class Stack {
private:
    int arr[SIZE];  // Stack array
    int top;       

public:
    Stack() {
        top = -1;   
    }

    // Push element into stack
    void push(int value) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = value;
        cout << value << " pushed into stack\n";
    }

    // Pop element from stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top] << " popped from stack\n";
        top--;
    }

    // Peek top element
    void peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Top element is: " << arr[top] << endl;
    }

    // Check if stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.pop();
    s.peek();

    if (s.isEmpty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    return 0;
}





// leetcode















class CustomStack {
    public:
        int *arr;
        int size;
        int top;
    
        CustomStack(int maxSize) {
            arr = new int[maxSize];
            size = maxSize;
            top = -1;
        }
    
        void push(int x) {
            if (top < size - 1) {  // Fix: max index is size - 1
                top++;
                arr[top] = x;
            }
        }
    
        int pop() {
            if (top >= 0) {
                int val = arr[top];
                top--;
                return val;
            }
            return -1;  // Stack empty
        }
    
        void increment(int k, int val) {
            int limit = min(k, top + 1);  // Don’t go out of bounds
            for (int i = 0; i < limit; i++) {
                arr[i] += val;
            }
        }
    };
    