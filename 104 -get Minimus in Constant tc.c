class MinStack {
   stack<int> s;
public:
    MinStack() {
      
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
          if(!s.empty()) {
            s.pop();
        }
    }







approach 2 -----------> use stack of pair 
tc =  0(1);
sc = 0(N);
    int top() {
         if(!s.empty()) {
            return s.top();
        }
        return -1; // Return something if stack is empty
    }
    
    int getMin() {
         if(s.empty()) return -1;

        int minVal = INT_MAX;
        stack<int> temp;

        // Find min and store elements in temp
        while(!s.empty()) {
            int curr = s.top();
            minVal = min(minVal, curr);
            temp.push(curr);
            s.pop();
        }

        // Restore the stack
        while(!temp.empty()) {
            s.push(temp.top());
            temp.pop();
        }

        return minVal;
    }

};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 
 
 
 
 
 
//  approach 2 -----------> use stack of pair 
//  tc =  0(1);
//  sc = 0(N);







class MinStack {
    stack<pair<int, int>> s;
public:
    MinStack() {
      
    }

    void push(int val) {
        if (s.empty()) {
            s.push({val, val});
        } else {
            int currMin = min(val, s.top().second);
            s.push({val, currMin});
        }
    }

    void pop() {
        if (!s.empty()) {
            s.pop();
        }
    }

    int top() {
        if (!s.empty()) {
            return s.top().first;
        }
        return -1; // Stack is empty
    }

    int getMin() {
        if (!s.empty()) {
            return s.top().second;
        }
        return -1; // Stack is empty
    }
};
