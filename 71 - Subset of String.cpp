#include <iostream>
#include <vector>
using namespace std;

void subset(vector<string> &s , vector<string>output , int size , int i) {
    
    if(i>size){
        for(string id : output){
            cout<<id<<" ";
        }
        cout<<endl;
        return;
    }
    subset(s ,output , size , i+1);
    output.push_back(s[i]);
      subset(s ,output , size , i+1);

}

int main() {
    vector<string> s = {"a","b","c"};
    vector<string> output;
    subset(s, output, s.size() - 1, 0);

    return 0;
}
