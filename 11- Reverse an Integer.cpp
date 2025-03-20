#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int n,ans=0;
    cout<<"Enter a number : ";
    cin>>n;
    
    while(n>0){
        int last_Digit = n%10;
        if(ans>(INT_MAX/10)||ans<(INT_MIN/10))
        ans*=10;
        ans+=last_Digit;
        
        n/=10;
    }
    cout<<ans;
    
    
    return 0;
}
