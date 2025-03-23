#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arry[n];
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }

    for (int i = 0; i < n ; i++) { 
        for (int j = 0; j < n; j++) {
            if(arry[j]>arry[j+1]){
                int temp = arry[j];
                arry[j]=arry[j+1];
                arry[j+1]=temp;
            }
           
        }
     
  
    }

  
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }

    return 0;
}
