#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cout<<"Enter the size of the character array : ";
    cin>>n;
   
   char ch[n+1];
   for(int i=0 ;i<n ; i++){
       cin>>ch[i];
   }
   int i=0 , j=n-1;

    while(i<=j){
        char t = ch[i];
        ch[i]=ch[j];
        ch[j]=t;
        i++;
        j--;
    }
     for(int i=0 ;i<n ; i++){
      cout<<ch[i];
   }
    

    return 0;
}
