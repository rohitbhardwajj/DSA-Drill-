#include <iostream>
using namespace std;



int main() {
    int n;
    bool flag =true;
    cout << "Enter values  ";
    cin >> n ;
    
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"Yes it's a prime number ";
    else cout<<"Not a prime number";
    return 0;
}
