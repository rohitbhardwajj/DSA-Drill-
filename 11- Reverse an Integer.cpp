#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,ans=0;
    cout<<"Enter a number : ";
    cin>>n;
    
    while(n>0){
        int last_Digit = n%10;
        ans*=10;
        ans+=last_Digit;
        
        n/=10;
    }
    cout<<ans;
    
    
    return 0;
}
