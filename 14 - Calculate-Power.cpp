#include <iostream>
using namespace std;

int main(){
    
    int b,p,ans=1;
    cout<<"Enter base = ";
    cin>>b;
    cout<<"Enter power = ";
    cin>>p;
    
    for(int i=0 ; i<p ; i++){
        ans = ans*b;
    }
    cout<<ans;
}