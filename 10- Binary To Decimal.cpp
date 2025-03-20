#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,ans=0 ,i=0;
    cout<<"Enter a number : ";
    cin>>n;
    
    while(n!=0){
        int digit = n%10;
        if(digit==1){
            ans+= pow(2,i);
        }
        i++;
        n/=10;
    }
    cout<<ans;
    
    
    return 0;
}
