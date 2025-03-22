#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,target;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter Number in an array : ";
    int arry[n];
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }
    cout<<"Enter a number u want to find in an array : ";
    cin>>target;
    for (int i = 0; i < n; i++) {
        if(arry[i]==target){
            cout<<target<<" is present in index number "<<i;
            break;
        }
    }

    return 0;
}
