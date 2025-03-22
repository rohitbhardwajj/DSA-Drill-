#include <iostream>
using namespace std;

int main()
{
    int n,s=0,e=0;
    cout<<"Enter size of the array : ";
    cin>>n;
    
    int arry[n];
    e=n-1;
      cout << "Enter " << n << " elements (Mountain array format): ";
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }

    
    while(s<e){
        int mid = s +(e-s)/2;
        
        if(arry[mid]>arry[mid+1]){
            e=mid;
        }else {
            s=mid+1;
        }
    }
    cout<<s;
    

    return 0;
}