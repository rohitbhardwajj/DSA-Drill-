#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n,target,s=0,e=0;

    cout<<"Enter the size of the array : ";
    cin>>n;
    int arry[n];
    cout<<"Enter 0 and 1 only : ";
    for(int i=0 ; i<n ; i++){
        cin>>arry[i];
    }
    e=n-1;
    while(s<e){
        if(arry[s]==0 && arry[e]==0){
            s++;
        }else if(arry[s]==1 && arry[e]==1){
            e--;
        }else if(arry[s]==0 && arry[e]==1){
            s++;
            e--;
        }else {
            swap(arry[s],arry[e]);
            s++;
            e--;
        }
    }
 
    for(int i=0 ; i<n ; i++){
        cout<<arry[i];
    }
   

    return 0;
}
