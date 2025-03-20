#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,ans=0,power=1;
    cout<<"Enter a number : ";
    cin>>n;
    
    while(n>0){
       int bit = !(n%2);
       ans+=bit*power;
       power*=2;
       n/=2;
    }
    cout<<ans;
    
    
    return 0;
}
