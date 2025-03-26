#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    int i = 0, j = 0, store = 0;
    
    while (j <= str.length()) { 
        if (str[j] == ' ' || str[j] == '\0') {  
            store = j - 1;  
            
  
            while (i < store) {
                char temp = str[i];
                str[i] = str[store];
                str[store] = temp;
                i++;
                store--;
            }
            i = j + 1;
        }
        j++;
    }
    
    cout << "Reversed words: " << str << endl;
    return 0;
}
