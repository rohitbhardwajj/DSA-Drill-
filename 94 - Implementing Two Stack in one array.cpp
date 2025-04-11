#include <iostream>
using namespace std;

class TwoStack {
public:
    int* arr;
    int size;
    int top1, top2;

    TwoStack(int s) {
        size = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }

    void push1(int num) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = num;
        }
    }

    void push2(int num) {
        if (top2 > top1 + 1) {
            top2--;
            arr[top2] = num;
        }
    }

    int pop1() {
        if (top1 >= 0) {
            int val = arr[top1];
            top1--;
            return val;
        }
        return -1;
    }

    int pop2() {
        if (top2 < size) {
            int val = arr[top2];
            top2++;
            return val;
        }
        return -1;
    }
};
