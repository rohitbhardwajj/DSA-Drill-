#include <iostream>
#include <climits>
using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i=0 ; i<n-1 ; i+=2){
        swap(arr[i],arr[i+1]);
    }
    for(int i=0 ; i<n ; i++){
      cout<<arr[i]<<" ";
    }
    

    return 0;
}
