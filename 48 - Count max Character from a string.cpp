#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    
    map<char, int> ans;
    

    for(int i = 0; i < str.length(); i++){
        ans[str[i]]++;  
    }
    int max=0;
    char a;
 
    for(auto it : ans){
       if(it.second>max){
           max = it.second;
           a = it.first;
       }
    }
    cout<<a<<" "<<max;

    return 0;
}
