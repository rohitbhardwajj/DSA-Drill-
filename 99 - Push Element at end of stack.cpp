#include <bits/stdc++.h>
using namespace std;

void pushEnd(stack<int>& myStack, int x) {
    if (myStack.empty()) {
        myStack.push(x);
        return;
    }

    int topElement = myStack.top();
    myStack.pop();

    pushEnd(myStack, x);  // Recursive call

    myStack.push(topElement);  // Push back after inserting x at bottom
}

stack<int> pushAtBottom(stack<int>& myStack, int x) {
    pushEnd(myStack, x);
    return myStack;
}
