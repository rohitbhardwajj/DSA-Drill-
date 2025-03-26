#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello i am rohit";
    
    // Step 1: Count spaces
    int spaceCount = 0;
    for (char ch : str) {
        if (ch == ' ') spaceCount++;
    }


    int oldSize = str.length();
    int newSize = oldSize + (2 * spaceCount); 
    str.resize(newSize); 


    int i = oldSize - 1; 
    int j = newSize - 1;

    while (i >= 0) {
        if (str[i] == ' ') {
            str[j] = '0';
            str[j - 1] = '4';
            str[j - 2] = '@';
            j -= 3; 
        } else {
            str[j] = str[i];
            j--; 
        }
        i--; // 
    }

    cout << str;
    return 0;
}




// approach-2

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "hello i am rohit";

//     for (int i = 0; i < str.length(); i++) { 
//         if (str[i] == ' ') {
//             str[i] = '@';       
//             str.insert(i + 1, "40");
//             i += 2; 
//         }
//     }

//     cout << str;
//     return 0;
// }


// approach---3


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "hello i am rohit";
//     string result = ""; // Naya string banayenge

//     for (int i = 0; i < str.length(); i++) { 
//         if (str[i] == ' ') {
//             result += "@40"; // Space ki jagah "@40" add karenge
//         } else {
//             result += str[i]; // Baaki characters as it is add karenge
//         }
//     }

//     cout << result;
//     return 0;
// }


