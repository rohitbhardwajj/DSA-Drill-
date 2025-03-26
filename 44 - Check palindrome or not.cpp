#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the character array: ";
    cin >> n;

    char ch[n + 1];  
    char temp[n + 1];  

    cout << "Enter elements in ch array: ";
    for (int i = 0; i < n; i++) {
        cin >> ch[i];
        temp[i] = ch[i]; 
    }
    ch[n] = '\0';
    temp[n] = '\0';  

    int i = 0, j = n - 1;
    while (i < j) {   
        swap(ch[i], ch[j]);
        i++;
        j--;
    }

    bool flag = true;  
    for (int i = 0; i < n; i++) {
        if (temp[i] != ch[i]) {
            flag = false;  
            break;  
        }
    }

    if (flag) {
        cout << "Yes, it's a palindrome";
    } else {
        cout << "Not a palindrome";
    }

    return 0;
}


// approach-2


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of the character array: ";
//     cin >> n;

//     char ch[n + 1];  

//     cout << "Enter elements in ch array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> ch[i];
//     }
//     ch[n] = '\0';

//     int i = 0, j = n - 1;
//     bool flag = true;  
//     while (i < j) {   
//       if(ch[i]!=ch[j]){
//           flag= false;
//           break;
//       }
//       i++;
//       j--;
//     }



//     if (flag) {
//         cout << "Yes, it's a palindrome";
//     } else {
//         cout << "Not a palindrome";
//     }

//     return 0;
// }

