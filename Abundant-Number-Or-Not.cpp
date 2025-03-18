#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout << "Enter a number : ";
    cin >> n;
    
   for(int i=1 ; i<=n/2 ; i++){
       if(n%i==0){
           sum+=i;
       }
   }
   
   if(sum>n) cout<<"Yes it's a Abundant Number";
   else cout<<"No it's not a Abundant Number";
    
}
