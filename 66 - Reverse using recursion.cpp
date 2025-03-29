#include <iostream>
using namespace std;

void reverse(string &s , int length ,int i=0) {
  
  if(i>length) return ;
  swap(s[i],s[length]);
  reverse(s,length-1 ,i+1);
        
}

int main() {
    string s;
    cout << "Enter string : ";
    cin >> s;
    int length =s.length()-1;

    reverse(s,length);
    cout<<s;
   

    return 0;
}
