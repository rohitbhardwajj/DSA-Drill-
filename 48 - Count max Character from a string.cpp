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


// approach------2



// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter a sentence: ";
//     getline(cin, str);

//     int freq[26] = {0};  

   
//     for (char ch : str) {
//         if (isalpha(ch)) {  
//             ch = tolower(ch);  
//             freq[ch - 'a']++;  
//         }
//     }

  
//     char maxChar = 'a';
//     int maxFreq = 0;
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] > maxFreq) {
//             maxFreq = freq[i];
//             maxChar = i + 'a';
//         }
//     }

//     cout << "Most frequent character: " << maxChar << " (occurs " << maxFreq << " times)" << endl;
    
//     return 0;
// }

