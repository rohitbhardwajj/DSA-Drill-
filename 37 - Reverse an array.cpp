#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int s=0 ,e=n-1;

    while(s<e){
        int temp= arr[s];
        arr[s]= arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
