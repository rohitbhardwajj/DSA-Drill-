#include <iostream>
using namespace std;

int fact(int n){
    int ans =0;
    if(n==0) return 1;
    ans = n*fact(n-1);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
   cout<< fact(n);

    return 0;
}