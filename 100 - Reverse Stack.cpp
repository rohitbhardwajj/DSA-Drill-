void insertAtBottom(stack<int> &s, int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s, x);
    s.push(temp);
}

void revUsingRec(stack<int>&s){
    if(s.empty()){
        return;
    }
    int ans = s.top();
    s.pop();
    revUsingRec(s);
    insertAtBottom(s, ans); // ?? bas ye chahiye
}

void reverseStack(stack<int> &stack) {
    revUsingRec(stack);
}
