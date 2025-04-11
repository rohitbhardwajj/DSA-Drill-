#include <bits/stdc++.h> 

void deleteMiddleHelper(stack<int>& st, int curr, int mid) {
    if (curr == mid) {
        st.pop();
        return;
    }

    int temp = st.top();
    st.pop();

    deleteMiddleHelper(st, curr + 1, mid);

    st.push(temp);
}

void deleteMiddle(stack<int>& inputStack, int N) {
    int mid = N / 2;
    deleteMiddleHelper(inputStack, 0, mid);
}

