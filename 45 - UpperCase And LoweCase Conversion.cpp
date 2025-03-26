#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the character array: ";
    cin >> n;

    char ch[n + 1];  

    cout << "Enter elements in ch array: ";
    for (int i = 0; i < n; i++) {
        cin >> ch[i];
    }
    ch[n] = '\0';

    cout << "Modified characters: ";
    for (int i = 0; i < n; i++) {
        if(ch[i]>=97){
             cout << (char)(ch[i] - 32);
        }else{
            cout << (char)(ch[i] + 32);
        }
         
    }

    return 0;
}
